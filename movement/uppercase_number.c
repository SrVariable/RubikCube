#include "../include/rubik.h"

/**
 * @brief Rotate the back face twice
 * 
 * @param cube The address of the cube
 */
void	move_back_2(char ****cube)
{
	move_back(cube);
	move_back(cube);
}

/**
 * @brief Rotate the front face twice
 * 
 * @param cube The address of the cube
 */
void	move_front_2(char ****cube)
{
	move_front(cube);
	move_front(cube);
}

/**
 * @brief Rotate the left face twice
 * 
 * @param cube The address of the cube
 */
void	move_left_2(char ****cube)
{
	move_left(cube);
	move_left(cube);
}

/**
 * @brief Rotate the right face twice
 * 
 * @param cube The address of the cube
 */
void	move_right_2(char ****cube)
{
	move_right(cube);
	move_right(cube);
}

/**
 * @brief Rotate the up face twice
 * 
 * @param cube The address of the cube
 */
void	move_up_2(char ****cube)
{
	move_up(cube);
	move_up(cube);
}

/**
 * @brief Rotate the down face twice
 * 
 * @param cube The address of the cube
 */
void	move_down_2(char ****cube)
{
	move_down(cube);
	move_down(cube);
}

/**
 * @brief Rotate the middle layer twice
 * 
 * @param cube The address of the cube
 */
void	move_middle_2(char ****cube)
{
	move_middle(cube);
	move_middle(cube);
}

/**
 * @brief Rotate the equator twice
 * 
 * @param cube The address of the cube
 */
void	move_equator_2(char ****cube)
{
	move_equator(cube);
	move_equator(cube);
}

/**
 * @brief Rotate the side twice
 * 
 * @param cube The address of the cube
 */
void	move_side_2(char ****cube)
{
	move_side(cube);
	move_side(cube);
}
