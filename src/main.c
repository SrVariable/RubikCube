#include "../include/rubik.h"

void	start_game(char ****cube, char ***canvas)
{
	int	exit;

	exit = 0;
	while (!exit)
	{
		printf("\n");
		for (int i = 0; i < FACE; i++)
		{
			for (int j = 0; j < ROW; j++)
			{
				printf("\t%s\n", (*cube)[i][j]);
			}
			printf("\n");
		}
		exit = user_input(cube);
	}
	return ;
}

void	rubik_cube(void)
{
	char	***cube;
	char	**canvas;

	cube = create_cube();
	if (!cube)
		return ;
	canvas = create_canvas();
	if (!canvas)
	{
		destroy_cube(&cube);
		return ;
	}
	//display_canvas(canvas);
	start_game(&cube, &canvas);
	destroy_canvas(&canvas);
	destroy_cube(&cube);
	return ;
}

int	main(void)
{
	rubik_cube();
	return (0);
}
