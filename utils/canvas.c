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

static void	set_coordinate_axis(char ***canvas, int center, int offset, int distance)
{
	char	symbol = '.';
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i <= center && (j == center - offset || j == center - offset + 1))
				(*canvas)[i][j] = symbol;
			else if (i == center + distance - offset && j == center - distance)
				(*canvas)[i][j] = symbol;
			else if (i == center + distance - offset && j == center + distance - offset)
			{
				(*canvas)[i][j] = symbol;
				distance++;
			}
		}
	}
}

static void	set_front_face(char ***canvas, int center, int offset, int distance)
{
	char	symbol = '@';
	for (int i = center; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i == center + distance - offset + 5 && j > center + distance - offset - 9 && j < center)
			{
				for (int k = 0; k < 7; k++)
				{
					(*canvas)[i - k][j] = symbol;
				}
				distance++;
			}
		}
	}
}

static void	set_upper_face(char ***canvas, int center, int offset, int distance)
{
	char	symbol = '&';
	for (int i = center; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i == center + distance - offset && j > center + distance - offset - 2 && j < SIZE - 8)
			{
				for (int k = 7; k > 0; k--)
				{
					(*canvas)[i - 9 + k][j - k + 1] = symbol;
					(*canvas)[i - 9 + k][j - k] = symbol;
				}
				distance++;
			}
		}
	}
}

static void	set_side_face(char ***canvas, int center, int offset, int distance)
{
	char	symbol = '#';
	for (int i = center; i < SIZE; i++)
	{
		for (int j = SIZE - 5; j > 0; j--)
		{
			if (i == center + distance - offset - 1 && j > center + distance - offset + 2 && j < SIZE)
			{
				for (int k = 0; k < 7; k++)
				{
					(*canvas)[i + k][j - 4 - k] = symbol;
				}
				distance++;
			}
		}
	}
}

static void	set_canvas(char ***canvas)
{
	int	center = SIZE / 2;
	int	offset = 1;
	int	distance = 2;

	for (int i = 0; i < SIZE; i++)
		memset((*canvas)[i], ' ', SIZE);
	set_coordinate_axis(canvas, center, offset, distance);
	set_front_face(canvas, center, offset, distance);
	set_upper_face(canvas, center, offset, distance);
	set_side_face(canvas, center, offset, distance);
}

void	display_canvas(char **canvas)
{
	// printf("\t");
	// for (int k = 0; k < SIZE; k++)
	// 	printf("%d ", k % 10);
	// printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		// printf("%d\t", i);
		for (int j = 0; j < SIZE; j++)
		{
			printf("%c ", canvas[i][j]);
		}
		printf("\n");
		//printf("\t%s\n", canvas[i]);
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
