#include "../include/rubik.h"

/**
 * @brief Free the memory allocated for the Rubik's cube
 * 
 * @details Free the memory allocated for the Rubik's cube
 * and set the pointer to NULL
 * 
 * @param cube The address of the cube to destroy
 * 
 * @return - NULL
 */
char	***destroy_cube(char ****cube)
{
	int	end;

	end = 0;
	for (int i = 0; i < FACE; i++)
	{
		if (end || !(*cube)[i])
			break ;
		for (int j = 0; j < ROW; j++)
		{
			if (!(*cube)[i][j])
			{
				end = 1;
				break ;
			}
			free((*cube)[i][j]);
			(*cube)[i][j] = NULL;
		}
		free((*cube)[i]);
		(*cube)[i] = NULL;
	}
	free(*cube);
	*cube = NULL;
	return (NULL);
}

/**
 * @brief Initialise the Rubik's cube
 * 
 * @details Allocate memory for the Rubik's cube and set
 * all the cells to '\0'
 * 
 * @return - The Rubik's cube if it was initialised successfully,
 * @return - NULL if an error occured
 */
static char	***initialise_cube(void)
{
	char	***cube;

	cube = (char ***)malloc((FACE + 1) * sizeof(char **));
	if (!cube)
		return (NULL);
	for (int i = 0; i < FACE; i++)
	{
		cube[i] = (char **)malloc((ROW + 1) * sizeof(char *));
		if (!cube[i])
			return (destroy_cube(&cube));
		for (int j = 0; j < ROW; j++)
		{
			cube[i][j] = (char *)calloc(COLUMN * 4 + 1, sizeof(char));
			if (!cube[i][j])
				return (destroy_cube(&cube));
		}
		cube[i][ROW] = NULL;
	}
	cube[FACE] = NULL;
	return (cube);
}

/**
 * @brief Set the faces of the Rubik's cube
 * 
 * @param cube The address of the cube
 */
static void set_faces(char ****cube)
{
	for (int i = 0; i < FACE; i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			switch (i)
			{
			case PURPLE:
				memcpy((*cube)[i][j], "🟪🟪🟪", sizeof("🟪🟪🟪"));
				break;
			case YELLOW:
				memcpy((*cube)[i][j], "🟨🟨🟨", sizeof("🟨🟨🟨"));
				break;
			case GREEN:
				memcpy((*cube)[i][j], "🟩🟩🟩", sizeof("🟩🟩🟩"));
				break;
			case RED:
				memcpy((*cube)[i][j], "🟥🟥🟥", sizeof("🟥🟥🟥"));
				break;
			case BLUE:
				memcpy((*cube)[i][j], "🟦🟦🟦", sizeof("🟦🟦🟦"));
				break;
			case ORANGE:
				memcpy((*cube)[i][j], "🟧🟧🟧", sizeof("🟧🟧🟧"));
				break;
			}
		}
	}
}

/**
 * @brief Draw the up face of the Rubik's cube
 * 
 * @param canvas The address of the canvas
 * @param cube The address of the cube
 */
static void	up_face(char ***canvas, char ***cube)
{
	int	offset = 4;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			// Row 0
				// Col 0
			(*canvas)[0][(i * 4) + j + offset + (6 + 0)] = cube[ORANGE][0][j];
			(*canvas)[1][(i * 4) + j + offset + (4 + 0)] = cube[ORANGE][0][j];
			(*canvas)[1][(i * 4) + j + offset + (12 + 0)] = cube[ORANGE][0][j];
			(*canvas)[2][(i * 4) + j + offset + (10 + 0)] = cube[ORANGE][0][j];
				// Col 1
			(*canvas)[0 + 2][(i * 4) + j + offset + (6 + 12)] = cube[ORANGE][0][j + 4];
			(*canvas)[1 + 2][(i * 4) + j + offset + (4 + 12)] = cube[ORANGE][0][j + 4];
			(*canvas)[1 + 2][(i * 4) + j + offset + (12 + 12)] = cube[ORANGE][0][j + 4];
			(*canvas)[2 + 2][(i * 4) + j + offset + (10 + 12)] = cube[ORANGE][0][j + 4];
				// Col 2
			(*canvas)[0 + 4][(i * 4) + j + offset + (6 + 24)] = cube[ORANGE][0][j + 8];
			(*canvas)[1 + 4][(i * 4) + j + offset + (4 + 24)] = cube[ORANGE][0][j + 8];
			(*canvas)[1 + 4][(i * 4) + j + offset + (12 + 24)] = cube[ORANGE][0][j + 8];
			(*canvas)[2 + 4][(i * 4) + j + offset + (12 + 20)] = cube[ORANGE][0][j + 8];

			// Row 1
				// Col 0
			(*canvas)[2][(i * 4) + j + offset + (2 + 0)] = cube[ORANGE][1][j];
			(*canvas)[3][(i * 4) + j + offset + (0 + 0)] = cube[ORANGE][1][j];
			(*canvas)[3][(i * 4) + j + offset + (8 + 0)] = cube[ORANGE][1][j];
			(*canvas)[4][(i * 4) + j + offset + (6 + 0)] = cube[ORANGE][1][j];
				// Col 1
			(*canvas)[2 + 2][(i * 4) + j + offset + (2 + 12)] = cube[ORANGE][1][j + 4];
			(*canvas)[3 + 2][(i * 4) + j + offset + (0 + 12)] = cube[ORANGE][1][j + 4];
			(*canvas)[3 + 2][(i * 4) + j + offset + (8 + 12)] = cube[ORANGE][1][j + 4];
			(*canvas)[4 + 2][(i * 4) + j + offset + (6 + 10)] = cube[ORANGE][1][j + 4];
				// Col 2
			(*canvas)[2 + 4][(i * 4) + j + offset + (2 + 22)] = cube[ORANGE][1][j + 8];
			(*canvas)[3 + 4][(i * 4) + j + offset + (0 + 20)] = cube[ORANGE][1][j + 8];
			(*canvas)[3 + 4][(i * 4) + j + offset + (8 + 20)] = cube[ORANGE][1][j + 8];
			(*canvas)[4 + 4][(i * 4) + j + offset + (6 + 18)] = cube[ORANGE][1][j + 8];

			// Row 2
				// Col 0
			(*canvas)[4][(i * 4) + j + offset - (2 + 0)] = cube[ORANGE][2][j];
			(*canvas)[5][(i * 4) + j + offset - (4 + 0)] = cube[ORANGE][2][j];
			(*canvas)[5][(i * 4) + j + offset + (4 + 0)] = cube[ORANGE][2][j];
			(*canvas)[6][(i * 4) + j + offset - (0 + 0)] = cube[ORANGE][2][j];
				// Col 1
			(*canvas)[4 + 2][(i * 4) + j + offset - (0 - 8)] = cube[ORANGE][2][j + 4];
			(*canvas)[5 + 2][(i * 4) + j + offset - (4 - 8)] = cube[ORANGE][2][j + 4];
			(*canvas)[5 + 2][(i * 4) + j + offset + (4 + 8)] = cube[ORANGE][2][j + 4];
			(*canvas)[6 + 2][(i * 4) + j + offset - (2 - 10)] = cube[ORANGE][2][j + 4];
				// Col 2
			(*canvas)[4 + 4][(i * 4) + j + offset - (2 - 18)] = cube[ORANGE][2][j + 8];
			(*canvas)[5 + 4][(i * 4) + j + offset - (4 - 16)] = cube[ORANGE][2][j + 8];
			(*canvas)[5 + 4][(i * 4) + j + offset + (4 + 16)] = cube[ORANGE][2][j + 8];
			(*canvas)[6 + 4][(i * 4) + j + offset - (2 - 18)] = cube[ORANGE][2][j + 8];
		}
	}
}

/**
 * @brief Draw the front face of the Rubik's cube
 * 
 * @param canvas The address of the canvas
 * @param cube The address of the cube
 */
static void	front_face(char ***canvas, char ***cube)
{
	int	offset = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			// Row 0
				// Col 0
			(*canvas)[6][4 + j + offset - (2 + 2)] = cube[YELLOW][0][j];
			(*canvas)[7][4 + j + offset - (2 + 2)] = cube[YELLOW][0][j];
			(*canvas)[7][4 + j + offset - (2 - 2)] = cube[YELLOW][0][j];
			(*canvas)[8][4 + j + offset - (2 - 2)] = cube[YELLOW][0][j];
				// Col 1
			(*canvas)[6 + 2][4 + j + offset - (2 - 6)] = cube[YELLOW][0][j + 4];
			(*canvas)[7 + 2][4 + j + offset - (2 - 6)] = cube[YELLOW][0][j + 4];
			(*canvas)[7 + 2][4 + j + offset - (2 - 10)] = cube[YELLOW][0][j + 4];
			(*canvas)[8 + 2][4 + j + offset - (2 - 10)] = cube[YELLOW][0][j + 4];
				// Col 2
			(*canvas)[6 + 4][4 + j + offset - (2 - 14)] = cube[YELLOW][0][j + 8];
			(*canvas)[7 + 4][4 + j + offset - (2 - 14)] = cube[YELLOW][0][j + 8];
			(*canvas)[7 + 4][4 + j + offset - (2 - 18)] = cube[YELLOW][0][j + 8];
			(*canvas)[8 + 4][4 + j + offset - (2 - 16)] = cube[YELLOW][0][j + 8];

			// Row 1
				// Col 0
			(*canvas)[8][4 + j + offset - (2 + 2)] = cube[YELLOW][1][j];
			(*canvas)[9][4 + j + offset - (2 + 2)] = cube[YELLOW][1][j];
			(*canvas)[9][4 + j + offset - (2 - 2)] = cube[YELLOW][1][j];
			(*canvas)[10][4 + j + offset - (2 - 2)] = cube[YELLOW][1][j];
				// Col 1
			(*canvas)[8 + 2][4 + j + offset - (2 - 6)] = cube[YELLOW][1][j + 4];
			(*canvas)[9 + 2][4 + j + offset - (2 - 6)] = cube[YELLOW][1][j + 4];
			(*canvas)[9 + 2][4 + j + offset - (2 - 10)] = cube[YELLOW][1][j + 4];
			(*canvas)[10 + 2][4 + j + offset - (2 - 8)] = cube[YELLOW][1][j + 4];
				// Col 2
			(*canvas)[8 + 4][4 + j + offset - (2 - 12)] = cube[YELLOW][1][j + 8];
			(*canvas)[9 + 4][4 + j + offset - (2 - 10)] = cube[YELLOW][1][j + 8];
			(*canvas)[9 + 4][4 + j + offset - (2 - 14)] = cube[YELLOW][1][j + 8];
			(*canvas)[10 + 4][4 + j + offset - (2 - 12)] = cube[YELLOW][1][j + 8];

			// Row 2
				// Col 0
			(*canvas)[10][4 + j + offset - (2 + 2)] = cube[YELLOW][2][j];
			(*canvas)[11][4 + j + offset - (2 + 2)] = cube[YELLOW][2][j];
			(*canvas)[11][4 + j + offset - (2 - 2)] = cube[YELLOW][2][j];
			(*canvas)[12][4 + j + offset - (2 + 0)] = cube[YELLOW][2][j];
				// Col 1
			(*canvas)[10 + 2][4 + j + offset - (2 - 4)] = cube[YELLOW][2][j + 4];
			(*canvas)[11 + 2][4 + j + offset - (2 - 2)] = cube[YELLOW][2][j + 4];
			(*canvas)[11 + 2][4 + j + offset - (2 - 6)] = cube[YELLOW][2][j + 4];
			(*canvas)[12 + 2][4 + j + offset - (2 - 4)] = cube[YELLOW][2][j + 4];
				// Col 2
			(*canvas)[10 + 4][4 + j + offset - (2 - 8)] = cube[YELLOW][2][j + 8];
			(*canvas)[11 + 4][4 + j + offset - (2 - 6)] = cube[YELLOW][2][j + 8];
			(*canvas)[11 + 4][4 + j + offset - (2 - 10)] = cube[YELLOW][2][j + 8];
			(*canvas)[12 + 4][4 + j + offset - (2 - 8)] = cube[YELLOW][2][j + 8];
		}
	}
}

/**
 * @brief Draw the side face of the Rubik's cube
 * 
 * @param canvas The address of the canvas
 * @param cube The address of the cube
 */
static void	side_face(char ***canvas, char ***cube)
{
	int	offset = 18;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
		// Row 0
			// Col 0
		(*canvas)[10][4 + j + offset + (6 + 0)] = cube[GREEN][0][j];
		(*canvas)[11][4 + j + offset + (2 + 0)] = cube[GREEN][0][j];
		(*canvas)[11][4 + j + offset + (6 + 0)] = cube[GREEN][0][j];
		(*canvas)[12][4 + j + offset + (0 + 0)] = cube[GREEN][0][j];
			// Col 1
		(*canvas)[10 - 2][4 + j + offset + (6 + 8)] = cube[GREEN][0][j + 4];
		(*canvas)[11 - 2][4 + j + offset + (2 + 8)] = cube[GREEN][0][j + 4];
		(*canvas)[11 - 2][4 + j + offset + (6 + 8)] = cube[GREEN][0][j + 4];
		(*canvas)[12 - 2][4 + j + offset + (2 + 8)] = cube[GREEN][0][j + 4];
			// Col 2
		(*canvas)[10 - 4][4 + j + offset + (6 + 16)] = cube[GREEN][0][j + 8];
		(*canvas)[11 - 4][4 + j + offset + (2 + 16)] = cube[GREEN][0][j + 8];
		(*canvas)[11 - 4][4 + j + offset + (6 + 16)] = cube[GREEN][0][j + 8];
		(*canvas)[12 - 4][4 + j + offset + (2 + 16)] = cube[GREEN][0][j + 8];
		// Row 1
			// Col 0
		(*canvas)[12][4 + j + offset + (4 + 0)] = cube[GREEN][1][j];
		(*canvas)[13][4 + j + offset + (-2 + 0)] = cube[GREEN][1][j];
		(*canvas)[13][4 + j + offset + (2 + 0)] = cube[GREEN][1][j];
		(*canvas)[14][4 + j + offset + (-4 + 0)] = cube[GREEN][1][j];
			// Col 1
		(*canvas)[12 - 2][4 + j + offset + (4 + 10)] = cube[GREEN][1][j + 4];
		(*canvas)[13 - 2][4 + j + offset + (-2 + 12)] = cube[GREEN][1][j + 4];
		(*canvas)[13 - 2][4 + j + offset + (2 + 12)] = cube[GREEN][1][j + 4];
		(*canvas)[14 - 2][4 + j + offset + (-4 + 12)] = cube[GREEN][1][j + 4];
			// Col 2
		(*canvas)[12 - 4][4 + j + offset + (4 + 18)] = cube[GREEN][1][j + 8];
		(*canvas)[13 - 4][4 + j + offset + (-2 + 20)] = cube[GREEN][1][j + 8];
		(*canvas)[13 - 4][4 + j + offset + (2 + 20)] = cube[GREEN][1][j + 8];
		(*canvas)[14 - 4][4 + j + offset + (-4 + 22)] = cube[GREEN][1][j + 8];
		// Row 2
			// Col 0
		(*canvas)[14][4 + j + offset - (0 - 0)] = cube[GREEN][2][j];
		(*canvas)[15][4 + j + offset - (6 - 0)] = cube[GREEN][2][j];
		(*canvas)[15][4 + j + offset - (2 - 0)] = cube[GREEN][2][j];
		(*canvas)[16][4 + j + offset - (8 - 0)] = cube[GREEN][2][j];
			// Col 1
		(*canvas)[14 - 2][4 + j + offset - (0 - 12)] = cube[GREEN][2][j + 4];
		(*canvas)[15 - 2][4 + j + offset - (6 - 12)] = cube[GREEN][2][j + 4];
		(*canvas)[15 - 2][4 + j + offset - (2 - 12)] = cube[GREEN][2][j + 4];
		(*canvas)[16 - 2][4 + j + offset - (8 - 12)] = cube[GREEN][2][j + 4];
			// Col 2
		(*canvas)[14 - 4][4 + j + offset - (0 - 22)] = cube[GREEN][2][j + 8];
		(*canvas)[15 - 4][4 + j + offset - (6 - 24)] = cube[GREEN][2][j + 8];
		(*canvas)[15 - 4][4 + j + offset - (2 - 24)] = cube[GREEN][2][j + 8];
		(*canvas)[16 - 4][4 + j + offset - (8 - 24)] = cube[GREEN][2][j + 8];
		}
	}
}

/**
 * @brief Draw the Rubik's cube
 * 
 * @details Draw the Rubik's cube on the canvas
 * 
 * @param canvas The address of the canvas
 * @param cube The address of the cube
 */
void	draw_cube(char ***canvas, char ***cube)
{
	up_face(canvas, cube);
	front_face(canvas, cube);
	side_face(canvas, cube);
}

/**
 * @brief Create the Rubik's cube
 * 
 * @return - The Rubik's cube if it was created successfully,
 * @return - NULL if an error occured
 */
char	***create_cube(void)
{
	char	***cube;

	cube = initialise_cube();
	if (!cube)
		return (NULL);
	set_faces(&cube);
	return (cube);
}
