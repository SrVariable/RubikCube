#include "../include/rubik.h"

/**
 * @brief Start the game
 * 
 * @details Start the game and handle the user input
 * 
 * @param cube The address of the cube
 * @param canvas The address of the canvas
 */
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
}

/**
 * @brief Set up the Rubik's cube
 * 
 * @details Set up the Rubik's cube and start the game
 */
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
}

int	main(void)
{
	rubik_cube();
	return (0);
}
