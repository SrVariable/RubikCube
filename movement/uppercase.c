#include "../include/rubik.h"

/**
 * @brief Rotate the back face 90 degrees counterclockwise
 * 
 * @param cube The address of the cube
 */
void	move_back(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[ORANGE][0][(i + 1) * 4 + j - 4];
			(*cube)[ORANGE][0][(i + 1) * 4 + j - 4] = (*cube)[GREEN][i][j + 8];
			(*cube)[GREEN][i][j + 8] = (*cube)[RED][i][j + 8];
			(*cube)[RED][i][j + 8] = (*cube)[BLUE][i][j + 8];
			(*cube)[BLUE][i][j + 8] = temp[(i + 1) * 4 + j - 4];
		}
	}
	for (int i = 0; i < 12; i++)
		temp[i] = (*cube)[YELLOW][i / 4][i % 4];
	for (int i = 0; i < 4; i++)
	{
		(*cube)[YELLOW][0][i] = (*cube)[YELLOW][0][i + 8];
		(*cube)[YELLOW][1][i] = (*cube)[YELLOW][0][i + 4];
		(*cube)[YELLOW][0][i + 4] = (*cube)[YELLOW][1][i + 8];
		(*cube)[YELLOW][0][i + 8] = (*cube)[YELLOW][2][i + 8];
		(*cube)[YELLOW][1][i + 8] = (*cube)[YELLOW][2][i + 4];
	}
	for (int i = 0; i < 12; i++)
		(*cube)[YELLOW][2][i] = temp[i];
}

/**
 * @brief Rotate the front face 90 degrees clockwise
 * 
 * @param cube The address of the cube
 */
void	move_front(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[ORANGE][2][(i + 1) * 4 + j - 4];
			(*cube)[ORANGE][2][(i + 1) * 4 + j - 4] = (*cube)[BLUE][i][j];
			(*cube)[BLUE][i][j] = (*cube)[RED][i][j];
			(*cube)[RED][i][j] = (*cube)[GREEN][i][j];
			(*cube)[GREEN][i][j] = temp[(i + 1) * 4 + j - 4];
		}
	}
	for (int i = 0; i < 12; i++)
		temp[i] = (*cube)[YELLOW][0][i];
	for (int i = 0; i < 4; i++)
	{
		(*cube)[YELLOW][0][i] = (*cube)[YELLOW][2][i];
		(*cube)[YELLOW][0][i + 4] = (*cube)[YELLOW][1][i];
		(*cube)[YELLOW][1][i] = (*cube)[YELLOW][2][i + 4];
		(*cube)[YELLOW][2][i] = (*cube)[YELLOW][2][i + 8];
		(*cube)[YELLOW][2][i + 4] = (*cube)[YELLOW][1][i + 8];
	}
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[YELLOW][i][j + 8] = temp[(i + 1) * 4 + j - 4];
}

/**
 * @brief Rotate the left face 90 degrees counterclockwise
 * 
 * @param cube The address of the cube
 */
void	move_left(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[YELLOW][i][j];
			(*cube)[YELLOW][i][j] = (*cube)[ORANGE][i][j];
			(*cube)[ORANGE][i][j] = (*cube)[PURPLE][i][j];
			(*cube)[PURPLE][i][j] = (*cube)[RED][2][(i + 1) * 4 + j - 4];
			(*cube)[RED][2][(i + 1) * 4 + j - 4] = temp[(i + 1) * 4 + j - 4];
		}
	}
	for (int i = 0; i < 12; i++)
		temp[i] = (*cube)[BLUE][i / 4][i % 4];
	for (int i = 0; i < 4; i++)
	{
		(*cube)[BLUE][0][i] = (*cube)[BLUE][0][i + 8];
		(*cube)[BLUE][1][i] = (*cube)[BLUE][0][i + 4];
		(*cube)[BLUE][0][i + 4] = (*cube)[BLUE][1][i + 8];
		(*cube)[BLUE][0][i + 8] = (*cube)[BLUE][2][i + 8];
		(*cube)[BLUE][1][i + 8] = (*cube)[BLUE][2][i + 4];
	}
	for (int i = 0; i < 12; i++)
		(*cube)[BLUE][2][i] = temp[i];
}

/**
 * @brief Rotate the right face 90 degrees clockwise
 * 
 * @param cube The address of the cube
 */
void	move_right(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[ORANGE][i][j + 8];
			(*cube)[ORANGE][i][j + 8] = (*cube)[YELLOW][i][j + 8];
			(*cube)[YELLOW][i][j + 8] = (*cube)[RED][0][(i + 1) * 4 + j - 4];
			(*cube)[RED][0][(i + 1) * 4 + j - 4] = (*cube)[PURPLE][i][j + 8];
			(*cube)[PURPLE][i][j + 8] = temp[(i + 1) * 4 + j - 4];
		}
	}
	for (int i = 0; i < 12; i++)
		temp[i] = (*cube)[GREEN][0][i];
	for (int i = 0; i < 4; i++)
	{
		(*cube)[GREEN][0][i] = (*cube)[GREEN][2][i];
		(*cube)[GREEN][0][i + 4] = (*cube)[GREEN][1][i];
		(*cube)[GREEN][1][i] = (*cube)[GREEN][2][i + 4];
		(*cube)[GREEN][2][i] = (*cube)[GREEN][2][i + 8];
		(*cube)[GREEN][2][i + 4] = (*cube)[GREEN][1][i + 8];
	}
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[GREEN][i][j + 8] = temp[(i + 1) * 4 + j - 4];
}

/**
 * @brief Rotate the up face 90 degrees clockwise
 * 
 * @param cube The address of the cube
 */
void	move_up(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < 12; i++)
	{
		temp[i] = (*cube)[GREEN][0][i];
		(*cube)[GREEN][0][i] = (*cube)[PURPLE][2][i];
		(*cube)[PURPLE][2][i] = (*cube)[BLUE][2][i];
		(*cube)[BLUE][2][i] = (*cube)[YELLOW][0][i];
		(*cube)[YELLOW][0][i] = temp[i];
		temp[i] = (*cube)[ORANGE][0][i];
	}
	for (int i = 0; i < 4; i++)
	{
		(*cube)[ORANGE][0][i] = (*cube)[ORANGE][2][i];
		(*cube)[ORANGE][0][i + 4] = (*cube)[ORANGE][1][i];
		(*cube)[ORANGE][1][i] = (*cube)[ORANGE][2][i + 4];
		(*cube)[ORANGE][2][i] = (*cube)[ORANGE][2][i + 8];
		(*cube)[ORANGE][2][i + 4] = (*cube)[ORANGE][1][i + 8];
	}
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[ORANGE][i][j + 8] = temp[(i + 1) * 4 + j - 4];
}

/**
 * @brief Rotate the down face 90 degrees counterclockwise
 * 
 * @param cube The address of the cube
 */
void	move_down(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < 12; i++)
	{
		temp[i] = (*cube)[YELLOW][2][i];
		(*cube)[YELLOW][2][i] = (*cube)[BLUE][0][i];
		(*cube)[BLUE][0][i] = (*cube)[PURPLE][0][i];
		(*cube)[PURPLE][0][i] = (*cube)[GREEN][2][i];
		(*cube)[GREEN][2][i] = temp[i];
		temp[i] = (*cube)[RED][i / 4][i % 4];
	}
	for (int i = 0; i < 4; i++)
	{
		(*cube)[RED][0][i] = (*cube)[RED][0][i + 8];
		(*cube)[RED][1][i] = (*cube)[RED][0][i + 4];
		(*cube)[RED][0][i + 4] = (*cube)[RED][1][i + 8];
		(*cube)[RED][0][i + 8] = (*cube)[RED][2][i + 8];
		(*cube)[RED][1][i + 8] = (*cube)[RED][2][i + 4];
	}
	for (int i = 0; i < 12; i++)
		(*cube)[RED][2][i] = temp[i];
}

/**
 * @brief Rotate the middle layer 90 degrees counterclockwise
 * 
 * @details Rotate the middle layer parallel to the right and
 * left faces 90 degrees counterclockwise
 * 
 * @param cube The address of the cube
 */
void	move_middle(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[YELLOW][i][j + 4];
			(*cube)[YELLOW][i][j + 4] = (*cube)[ORANGE][i][j + 4];
			(*cube)[ORANGE][i][j + 4] = (*cube)[PURPLE][i][j + 4];
			(*cube)[PURPLE][i][j + 4] = (*cube)[RED][1][(i + 1) * 4 + j - 4];
			(*cube)[RED][1][(i + 1) * 4 + j - 4] = temp[(i + 1) * 4 + j - 4];
		}
	}
}

/**
 * @brief Rotate the middle layer 90 degrees counterclockwise
 * 
 * @details Rotate the middle layer parallel to the up and
 * down faces 90 degrees counterclockwise
 * 
 * @param cube The address of the cube
 */
void	move_equator(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < 12; i++)
	{
		temp[i] = (*cube)[YELLOW][1][i];
		(*cube)[YELLOW][1][i] = (*cube)[BLUE][1][i];
		(*cube)[BLUE][1][i] = (*cube)[PURPLE][1][i];
		(*cube)[PURPLE][1][i] = (*cube)[GREEN][1][i];
		(*cube)[GREEN][1][i] = temp[i];
	}
}

/**
 * @brief Rotate the middle layer 90 degrees clockwise
 * 
 * @details Rotate the middle layer parallel to the front
 * and back faces 90 degrees clockwise
 * 
 * @param cube The address of the cube
 */
void	move_side(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[ORANGE][1][(i + 1) * 4 + j - 4];
			(*cube)[ORANGE][1][(i + 1) * 4 + j - 4] = (*cube)[BLUE][i][j + 4];
			(*cube)[BLUE][i][j + 4] = (*cube)[RED][i][j + 4];
			(*cube)[RED][i][j + 4] = (*cube)[GREEN][i][j + 4];
			(*cube)[GREEN][i][j + 4] = temp[(i + 1) * 4 + j - 4];
		}
	}
}
