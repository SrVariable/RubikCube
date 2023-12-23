#include "../include/rubik.h"

void	move_back(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[E_ORANGE][0][(i + 1) * 4 + j - 4];
			(*cube)[E_ORANGE][0][(i + 1) * 4 + j - 4] = (*cube)[E_GREEN][i][j + 8];
			(*cube)[E_GREEN][i][j + 8] = (*cube)[E_RED][i][j + 8];
			(*cube)[E_RED][i][j + 8] = (*cube)[E_BLUE][i][j + 8];
			(*cube)[E_BLUE][i][j + 8] = temp[(i + 1) * 4 + j - 4];
		}
	}
	return ;
}

void	move_front(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[E_ORANGE][2][(i + 1) * 4 + j - 4];
			(*cube)[E_ORANGE][2][(i + 1) * 4 + j - 4] = (*cube)[E_BLUE][i][j];
			(*cube)[E_BLUE][i][j] = (*cube)[E_RED][i][j];
			(*cube)[E_RED][i][j] = (*cube)[E_GREEN][i][j];
			(*cube)[E_GREEN][i][j] = temp[(i + 1) * 4 + j - 4];
		}
	}
	return ;
}

void	move_left(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[E_YELLOW][i][j];
			(*cube)[E_YELLOW][i][j] = (*cube)[E_ORANGE][i][j];
			(*cube)[E_ORANGE][i][j] = (*cube)[E_PURPLE][i][j];
			(*cube)[E_PURPLE][i][j] = (*cube)[E_RED][2][(i + 1) * 4 + j - 4];
			(*cube)[E_RED][2][(i + 1) * 4 + j - 4] = temp[(i + 1) * 4 + j - 4];
		}
	}
	return ;
}

void	move_right(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[E_ORANGE][i][j + 8];
			(*cube)[E_ORANGE][i][j + 8] = (*cube)[E_YELLOW][i][j + 8];
			(*cube)[E_YELLOW][i][j + 8] = (*cube)[E_RED][0][(i + 1) * 4 + j - 4];
			(*cube)[E_RED][0][(i + 1) * 4 + j - 4] = (*cube)[E_PURPLE][i][j + 8];
			(*cube)[E_PURPLE][i][j + 8] = temp[(i + 1) * 4 + j - 4];
		}
	}
	return ;
}

void	move_up(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < 12; i++)
	{
		temp[i] = (*cube)[E_GREEN][0][i];
		(*cube)[E_GREEN][0][i] = (*cube)[E_PURPLE][2][i];
		(*cube)[E_PURPLE][2][i] = (*cube)[E_BLUE][2][i];
		(*cube)[E_BLUE][2][i] = (*cube)[E_YELLOW][0][i];
		(*cube)[E_YELLOW][0][i] = temp[i];
	}
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			temp[(i + 1) * 4 + j - 4] = (*cube)[E_ORANGE][i][j];
	for (int i = 0; i < 4; i++)
	{
		(*cube)[E_ORANGE][0][i] = (*cube)[E_ORANGE][0][i + 8];
		(*cube)[E_ORANGE][1][i] = (*cube)[E_ORANGE][0][i + 4];
		(*cube)[E_ORANGE][0][i + 4] = (*cube)[E_ORANGE][1][i + 8];
		(*cube)[E_ORANGE][0][i + 8] = (*cube)[E_ORANGE][2][i + 8];
		(*cube)[E_ORANGE][1][i + 8] = (*cube)[E_ORANGE][2][i + 4];
	}
	for (int i = 0; i < 12; i++)
		(*cube)[E_ORANGE][2][i] = temp[i];
	return ;
}

void	move_down(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < 12; i++)
	{
		temp[i] = (*cube)[E_YELLOW][2][i];
		(*cube)[E_YELLOW][2][i] = (*cube)[E_BLUE][0][i];
		(*cube)[E_BLUE][0][i] = (*cube)[E_PURPLE][0][i];
		(*cube)[E_PURPLE][0][i] = (*cube)[E_GREEN][2][i];
		(*cube)[E_GREEN][2][i] = temp[i];
		temp[i] = (*cube)[E_RED][0][i];
	}
	for (int i = 0; i < 4; i++)
	{
		(*cube)[E_RED][0][i] = (*cube)[E_RED][2][i];
		(*cube)[E_RED][0][i + 4] = (*cube)[E_RED][1][i];
		(*cube)[E_RED][1][i] = (*cube)[E_RED][2][i + 4];
		(*cube)[E_RED][2][i] = (*cube)[E_RED][2][i + 8];
		(*cube)[E_RED][2][i + 4] = (*cube)[E_RED][1][i + 8];
	}
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[E_RED][i][j + 8] = temp[(i + 1) * 4 + j - 4];
	return ;
}

void	move_middle(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[E_YELLOW][i][j + 4];
			(*cube)[E_YELLOW][i][j + 4] = (*cube)[E_ORANGE][i][j + 4];
			(*cube)[E_ORANGE][i][j + 4] = (*cube)[E_PURPLE][i][j + 4];
			(*cube)[E_PURPLE][i][j + 4] = (*cube)[E_RED][1][(i + 1) * 4 + j - 4];
			(*cube)[E_RED][1][(i + 1) * 4 + j - 4] = temp[(i + 1) * 4 + j - 4];
		}
	}
	return ;
}

void	move_equator(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < 12; i++)
	{
		temp[i] = (*cube)[E_YELLOW][1][i];
		(*cube)[E_YELLOW][1][i] = (*cube)[E_BLUE][1][i];
		(*cube)[E_BLUE][1][i] = (*cube)[E_PURPLE][1][i];
		(*cube)[E_PURPLE][1][i] = (*cube)[E_GREEN][1][i];
		(*cube)[E_GREEN][1][i] = temp[i];
	}
	return ;
}

void	move_side(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[(i + 1) * 4 + j - 4] = (*cube)[E_ORANGE][i][j + 4];
			(*cube)[E_ORANGE][i][j + 4] = (*cube)[E_BLUE][i][j + 4];
			(*cube)[E_BLUE][i][j + 4] = (*cube)[E_RED][i][j + 4];
			(*cube)[E_RED][i][j + 4] = (*cube)[E_GREEN][i][j + 4];
			(*cube)[E_GREEN][i][j + 4] = temp[(i + 1) * 4 + j - 4];
		}
	}
	return ;
}
