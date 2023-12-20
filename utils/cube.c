#include "../include/rubik.h"

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

static void set_faces(char ****cube)
{
	for (int i = 0; i < FACE; i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			switch (i)
			{
			case E_WHITE:
				memcpy((*cube)[i][j], "⬜⬜⬜", sizeof("⬜⬜⬜"));
				break;
			case E_YELLOW:
				memcpy((*cube)[i][j], "🟨🟨🟨", sizeof("🟨🟨🟨"));
				break;
			case E_GREEN:
				memcpy((*cube)[i][j], "🟩🟩🟩", sizeof("🟩🟩🟩"));
				break;
			case E_RED:
				memcpy((*cube)[i][j], "🟥🟥🟥", sizeof("🟥🟥🟥"));
				break;
			case E_BLUE:
				memcpy((*cube)[i][j], "🟦🟦🟦", sizeof("🟦🟦🟦"));
				break;
			case E_ORANGE:
				memcpy((*cube)[i][j], "🟧🟧🟧", sizeof("🟧🟧🟧"));
				break;
			}
		}
	}
}

// TODO
void	display_cube(char ***cube)
{
// 	int length = 36;
// 	int center = length / 2 - 1;
// 	int	distance = 2;
// 	for (int i = 0; i < length; i++)
// 	{
// 		for (int j = 0; j < length; j++)
// 		{
// 			if (j == 0)
// 				printf("\t");
// 			if (i <= center + 1 && (j == center || j == center + 1))
// 				printf("⬛");
// 			else if (i == center + distance && j == center - distance + 1)
// 				printf("⬛");
// 			else if (i == center + distance && j == center + distance)
// 			{
// 				printf("⬛");
// 				distance++;
// 			}
// 			else if (i > center - distance * 3 && j < center - distance + 2 && j > 7)
// 				printf("🟦");
// 			else if (i == center + distance && center + distance < length - 8 && (j > center - distance + 1 && j < center + distance))
// 				printf("🟧");
// 			else if (i == center + distance && center + distance >= length - 8 && (j < center - distance + 20 && j > center + distance - 19))
// 				printf("🟧");
// 			else
// 				printf("🟪");
// 		}
// 		printf("\n");
// 	}
}

char	***create_cube(void)
{
	char	***cube;

	cube = initialise_cube();
	if (!cube)
		return (NULL);
	set_faces(&cube);
	return (cube);
}
