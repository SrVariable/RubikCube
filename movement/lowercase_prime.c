#include "../include/rubik.h"

/**
 * @brief Reverse rotate the cube around the x axis
 * 
 * @param cube The address of the cube
 */
void	rotate_x_prime(char ****cube)
{
	move_right_prime(cube);
	move_middle(cube);
	move_left(cube);
}

/**
 * @brief Reverse rotate the cube around the y axis
 * 
 * @param cube The address of the cube
 */
void	rotate_y_prime(char ****cube)
{
	move_up_prime(cube);
	move_equator(cube);
	move_down(cube);
}

/**
 * @brief Reverse rotate the cube around the z axis
 * 
 * @param cube The address of the cube
 */
void	rotate_z_prime(char ****cube)
{
	move_front_prime(cube);
	move_side_prime(cube);
	move_back(cube);
}

/**
 * @brief Reverse move two layers of the upper face
 * 
 * @details Reverse move two layers the upper face using
 * the move_up_prime and move_equator functions
 * 
 * @param cube The address of the cube
 */
void	move_u_prime(char ****cube)
{
	move_up_prime(cube);
	move_equator(cube);
}

/**
 * @brief Reverse move two layers of the right face
 * 
 * @details Reverse move two layers the right face using
 * the move_middle and move_right_prime functions
 * 
 * @param cube The address of the cube
 */
void	move_r_prime(char ****cube)
{
	move_middle(cube);
	move_right_prime(cube);
}

/**
 * @brief Reverse move two layers of the front face
 * 
 * @details Reverse move two layers the front face using
 * the move_side_prime and move_front_prime functions
 * 
 * @param cube The address of the cube
 */
void	move_f_prime(char ****cube)
{
	move_front_prime(cube);
	move_side_prime(cube);
}

/**
 * @brief Reverse move two layers of the down face
 * 
 * @details Reverse move two layers the down face using
 * the move_down_prime and move_equator_prime functions
 * 
 * @param cube The address of the cube
 */
void	move_d_prime(char ****cube)
{
	move_down_prime(cube);
	move_equator_prime(cube);
}

/**
 * @brief Reverse move two layers of the left face
 * 
 * @details Reverse move two layers the left face using
 * the move_left_prime and move_middle_prime functions
 * 
 * @param cube The address of the cube
 */
void	move_l_prime(char ****cube)
{
	move_left_prime(cube);
	move_middle_prime(cube);
}

/**
 * @brief Reverse move two layers of the back face
 * 
 * @details Reverse move two layers the back face using
 * the move_back_prime and move_side functions
 * 
 * @param cube The address of the cube
 */
void	move_b_prime(char ****cube)
{
	move_back_prime(cube);
	move_side(cube);
}
