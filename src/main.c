#include "../include/rubik.h"

static void	start_game(char ****cube, char ***canvas)
{
	int	exit;

	exit = 0;
	while (exit != 1)
	{
		draw_cube(canvas, *cube);
		display_canvas(*canvas);
		exit = user_input(cube);
	}
	return ;
}

static void	rubik_cube(void)
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
