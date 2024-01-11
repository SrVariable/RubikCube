#include "../include/rubik.h"

void	rotate_x_prime(char ****cube)
{
	move_right_prime(cube);
	move_middle(cube);
	move_left(cube);
}

void	rotate_y_prime(char ****cube)
{
	move_up_prime(cube);
	move_equator(cube);
	move_down(cube);
}

void	rotate_z_prime(char ****cube)
{
	move_front_prime(cube);
	move_side_prime(cube);
	move_back(cube);
}

void	move_u_prime(char ****cube)
{
	move_up_prime(cube);
	move_equator(cube);
}

void	move_r_prime(char ****cube)
{
	move_middle(cube);
	move_right_prime(cube);
}

void	move_f_prime(char ****cube)
{
	move_front_prime(cube);
	move_side_prime(cube);
}

void	move_d_prime(char ****cube)
{
	move_down_prime(cube);
	move_equator_prime(cube);
}

void	move_l_prime(char ****cube)
{
	move_left_prime(cube);
	move_middle_prime(cube);
}

void	move_b_prime(char ****cube)
{
	move_back_prime(cube);
	move_side(cube);
}
