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
		canvas[i] = (char *)calloc((SIZE + 1) * 3, sizeof(char));
		if (!canvas[i])
			return (destroy_canvas(&canvas));
		memset(canvas[i], ' ', SIZE * 2);
	}
	canvas[SIZE] = NULL;
	return (canvas);
}

void	display_canvas(char **canvas)
{
	for (int i = 0; i < SIZE - 3; i++)
	{
		for (int j = 0; j < SIZE * 3; j++)
		{
			printf("%c", canvas[i][j]);
		}
		printf("\n");
	}
}

char	**create_canvas(void)
{
	char	**canvas;

	canvas = initialise_canvas();
	if (!canvas)
		return (NULL);
	return (canvas);
}
