#include "../include/rubik.h"

int	handle_movement(char ****cube, char input)
{
	switch (input)
	{
	case 'B':
		printf("Move back\n");
		move_back(cube);
		return (0);
	case 'F':
		printf("Move front\n");
		move_front(cube);
		return (0);
	case 'L':
		printf("Move left\n");
		move_left(cube);
		return (0);
	case 'R':
		printf("Move right\n");
		move_right(cube);
		return (0);
	case 'U':
		printf("Move up\n");
		move_up(cube);
		return (0);
	case 'D':
		printf("Move down\n");
		move_down(cube);
		return (0);
	case 'E':
	case 'Q':
		printf("Exiting...\n");
		return (1);
	default:
		printf("Invalid movement\n");
		return (0);
	}
}
