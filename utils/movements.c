#include "../include/rubik.h"

void	move_back(char ****cube)
{
	char	temp[12];
	int		k;

	for (int i = 0; i < 12; i++)
		temp[i] = (*cube)[E_ORANGE][0][i];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 8; j < 12; j++)
			(*cube)[E_ORANGE][0][k++] = (*cube)[E_BLUE][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 8; j < 12; j++)
			(*cube)[E_BLUE][i][j] = (*cube)[E_RED][2][k++];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[E_RED][2][k++] = (*cube)[E_GREEN][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[E_GREEN][i][j] = temp[k++];
}

void	move_front(char ****cube)
{
	char	temp[12];
	int		k;

	for (int i = 0; i < 12; i++)
		temp[i] = (*cube)[E_ORANGE][2][i];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 8; j < 12; j++)
			(*cube)[E_ORANGE][2][k++] = (*cube)[E_GREEN][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 8; j < 12; j++)
			(*cube)[E_GREEN][i][j] = (*cube)[E_RED][0][k++];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[E_RED][0][k++] = (*cube)[E_BLUE][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_BLUE][i][j] = temp[k++];
}

void	move_left(char ****cube)
{
	char	temp[12];
	int		k;

	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			temp[k++] = (*cube)[E_YELLOW][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[E_YELLOW][i][j] = (*cube)[E_ORANGE][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[E_ORANGE][i][j] = (*cube)[E_PURPLE][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[E_PURPLE][i][j] = (*cube)[E_RED][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < 4; j++)
			(*cube)[E_RED][i][j] = temp[k++];
}

void	move_right(char ****cube)
{
	char	temp[12];
	int		k;

	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 8; j < 12; j++)
			temp[k++] = (*cube)[E_ORANGE][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 8; j < 12; j++)
			(*cube)[E_ORANGE][i][j] = (*cube)[E_YELLOW][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 8; j < 12; j++)
			(*cube)[E_YELLOW][i][j] = (*cube)[E_RED][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 8; j < 12; j++)
			(*cube)[E_RED][i][j] = (*cube)[E_PURPLE][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 8; j < 12; j++)
			(*cube)[E_PURPLE][i][j] = temp[k++];
}

void	move_up(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < 12; i++)
		temp[i] = (*cube)[E_BLUE][0][i];
	for (int i = 0; i < 12; i++)
		(*cube)[E_BLUE][0][i] = (*cube)[E_PURPLE][0][i];
	for (int i = 0; i < 12; i++)
		(*cube)[E_PURPLE][0][i] = (*cube)[E_GREEN][0][i];
	for (int i = 0; i < 12; i++)
		(*cube)[E_GREEN][0][i] = (*cube)[E_YELLOW][0][i];
	for (int i = 0; i < 12; i++)
		(*cube)[E_YELLOW][0][i] = temp[i];
}

void	move_down(char ****cube)
{
	char	temp[12];

	for (int i = 0; i < 12; i++)
		temp[i] = (*cube)[E_BLUE][2][i];
	for (int i = 0; i < 12; i++)
		(*cube)[E_BLUE][2][i] = (*cube)[E_YELLOW][2][i];
	for (int i = 0; i < 12; i++)
		(*cube)[E_YELLOW][2][i] = (*cube)[E_GREEN][2][i];
	for (int i = 0; i < 12; i++)
		(*cube)[E_GREEN][2][i] = (*cube)[E_PURPLE][2][i];
	for (int i = 0; i < 12; i++)
		(*cube)[E_PURPLE][2][i] = temp[i];
}

