#include "../include/rubik.h"

void	rotate_x(char ****cube)
{
	move_right(cube);
	move_middle_prime(cube);
	move_left_prime(cube);
}

void	rotate_y(char ****cube)
{
	move_up(cube);
	move_equator_prime(cube);
	move_down_prime(cube);
}

void	rotate_z(char ****cube)
{
	move_front(cube);
	move_side(cube);
	move_back_prime(cube);
}

void	move_u(char ****cube)
{
	move_up(cube);
	move_equator_prime(cube);
}

void	move_r(char ****cube)
{
	move_right(cube);
	move_middle_prime(cube);
}

void	move_f(char ****cube)
{
	move_front(cube);
	move_side(cube);
}

void	move_d(char ****cube)
{
	move_down(cube);
	move_equator(cube);
}

void	move_l(char ****cube)
{
	move_left(cube);
	move_middle(cube);
}

void	move_b(char ****cube)
{
	move_back(cube);
	move_side_prime(cube);
}
