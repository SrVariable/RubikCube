#include "../include/rubik.h"

/**
 * @brief Free the memory allocated for the canvas
 * 
 * @details Free the memory allocated for the canvas
 * and set the pointer to NULL
 * 
 * @param canvas The address of the canvas to destroy
 * 
 * @return - NULL
 */
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

/**
 * @brief Initialise the canvas
 * 
 * @details Allocate memory for the canvas and set
 * all the cells to ' '
 * 
 * @return - The canvas if it was initialised successfully,
 * @return - NULL if an error occured
 */
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

/**
 * @brief Display the canvas
 * 
 * @details Display the canvas on the standard output
 * 
 * @param canvas The canvas to display
 */
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

/**
 * @brief Create the canvas
 * 
 * @return - The canvas if it was created successfully,
 * @return - NULL if an error occured
 */
char	**create_canvas(void)
{
	char	**canvas;

	canvas = initialise_canvas();
	if (!canvas)
		return (NULL);
	return (canvas);
}
