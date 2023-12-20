#include "../include/rubik.h"

char	**destroy_canvas(char ***canvas)
{
	for (int i = 0; i < SIZE ; i++)
	{
		free((*canvas)[i]);
		(*canvas)[i] = NULL;
	}
	free(*canvas);
	*canvas = NULL;
	return (NULL);
}

static char	**initialise_canvas(void)
{
	char	**canvas;

	canvas = (char **)malloc((SIZE + 1) * sizeof(char *));
	if (!canvas)
		return (NULL);
	for (int i = 0; i < SIZE; i++)
	{
		canvas[i] = (char *)calloc(SIZE + 1, sizeof(char));
		if (!canvas[i])
			return (destroy_canvas(&canvas));
	}
	canvas[SIZE] = NULL;
	return (canvas);
}

static void	set_canvas(char ***canvas)
{
	int	center = SIZE / 2;
	int	offset = 1;
	int	distance = 2;

	for (int i = 0; i < SIZE; i++)
	{
		memset((*canvas)[i], '.', SIZE);
	}
	// Insertar ejes
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i <= center && (j == center - offset || j == center - offset + 1))
				(*canvas)[i][j] = '*';
			else if (i == center + distance - offset && j == center - distance)
				(*canvas)[i][j] = '*';
			else if (i == center + distance - offset && j == center + distance - offset)
			{
				(*canvas)[i][j] = '*';
				distance++;
			}
			else if (i > center && i < SIZE - distance + offset && (j > center - distance && j <= center + distance - offset - 1))
			{
				(*canvas)[i][j] = '@';
			}
		}
	}
}

void	display_canvas(char **canvas)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%s\n", canvas[i]);
	}
}

char	**create_canvas(void)
{
	char	**canvas;

	canvas = initialise_canvas();
	if (!canvas)
		return (NULL);
	set_canvas(&canvas);
	return (canvas);
}
