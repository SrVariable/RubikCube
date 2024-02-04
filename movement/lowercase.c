#include "../include/rubik.h"

/**
 * @brief Rotate the cube around the x axis
 * 
 * @param cube The address of the cube
 */
void	rotate_x(char ****cube)
{
	move_right(cube);
	move_middle_prime(cube);
	move_left_prime(cube);
}

/**
 * @brief Rotate the cube around the y axis
 * 
 * @param cube The address of the cube
 */
void	rotate_y(char ****cube)
{
	move_up(cube);
	move_equator_prime(cube);
	move_down_prime(cube);
}

/**
 * @brief Rotate the cube around the z axis
 * 
 * @param cube The address of the cube
 */
void	rotate_z(char ****cube)
{
	move_front(cube);
	move_side(cube);
	move_back_prime(cube);
}

/**
 * @brief Rotate two layers of the upper face
 * 
 * @details Rotate two layers the upper face using
 * the move_up and move_equator_prime functions
 * 
 * @param cube The address of the cube
 */
void	move_u(char ****cube)
{
	move_up(cube);
	move_equator_prime(cube);
}

/**
 * @brief Rotate two layers of the right face
 * 
 * @details Rotate two layers the right face using
 * the move_middle_prime and move_right functions
 * 
 * @param cube The address of the cube
 */
void	move_r(char ****cube)
{
	move_right(cube);
	move_middle_prime(cube);
}

/**
 * @brief Rotate two layers of the front face
 * 
 * @details Rotate two layers the front face using
 * the move_side and move_front_prime functions
 * 
 * @param cube The address of the cube
 */
void	move_f(char ****cube)
{
	move_front(cube);
	move_side(cube);
}

/**
 * @brief Rotate two layers of the down face
 * 
 * @details Rotate two layers the down face using
 * the move_down and move_equator functions
 * 
 * @param cube The address of the cube
 */
void	move_d(char ****cube)
{
	move_down(cube);
	move_equator(cube);
}

/**
 * @brief Rotate two layers of the left face
 * 
 * @details Rotate two layers the left face using
 * the move_middle and move_left_prime functions
 * 
 * @param cube The address of the cube
 */
void	move_l(char ****cube)
{
	move_left(cube);
	move_middle(cube);
}

/**
 * @brief Rotate two layers of the back face
 * 
 * @details Rotate two layers the back face using
 * the move_back and move_side_prime functions
 * 
 * @param cube The address of the cube
 */
void	move_b(char ****cube)
{
	move_back(cube);
	move_side_prime(cube);
}
