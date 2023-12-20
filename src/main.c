#include "../include/rubik.h"

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
	for (int i = 0; i < FACE; i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			printf("%s\n", cube[i][j]);
		}
	}
	destroy_canvas(&canvas);
	destroy_cube(&cube);
	return ;
}

int	main(void)
{
	rubik_cube();
	return (0);
}
