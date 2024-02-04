#include "../include/rubik.h"

/**
 * @brief Rotate the cube around the x axis twice
 * 
 * @param cube The address of the cube
 */
void	rotate_x_2(char ****cube)
{
	rotate_x(cube);
	rotate_x(cube);
}

/**
 * @brief Rotate the cube around the y axis twice
 * 
 * @param cube The address of the cube
 */
void	rotate_y_2(char ****cube)
{
	rotate_y(cube);
	rotate_y(cube);
}

/**
 * @brief Rotate the cube around the z axis twice
 * 
 * @param cube The address of the cube
 */
void	rotate_z_2(char ****cube)
{
	rotate_z(cube);
	rotate_z(cube);
}

/**
 * @brief Rotate the upper face twice
 * 
 * @param cube The address of the cube
 */
void	move_u_2(char ****cube)
{
	move_u(cube);
	move_u(cube);
}

/**
 * @brief Rotate the right face twice
 * 
 * @param cube The address of the cube
 */
void	move_r_2(char ****cube)
{
	move_r(cube);
	move_r(cube);
}

/**
 * @brief Rotate the front face twice
 * 
 * @param cube The address of the cube
 */
void	move_f_2(char ****cube)
{
	move_f(cube);
	move_f(cube);
}

/**
 * @brief Rotate the down face twice
 * 
 * @param cube The address of the cube
 */
void	move_d_2(char ****cube)
{
	move_d(cube);
	move_d(cube);
}

/**
 * @brief Rotate the left face twice
 * 
 * @param cube The address of the cube
 */
void	move_l_2(char ****cube)
{
	move_l(cube);
	move_l(cube);
}

/**
 * @brief Rotate the back face twice
 * 
 * @param cube The address of the cube
 */
void	move_b_2(char ****cube)
{
	move_b(cube);
	move_b(cube);
}
