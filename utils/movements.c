#include "../include/rubik.h"

void	move_back(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			temp[k++] = (*cube)[E_ORANGE][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_ORANGE][i][j] = (*cube)[E_BLUE][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_BLUE][i][j] = (*cube)[E_RED][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_RED][i][j] = (*cube)[E_GREEN][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_GREEN][i][j] = temp[k++];
}

void	move_front(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			temp[k++] = (*cube)[E_ORANGE][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_ORANGE][i][j] = (*cube)[E_GREEN][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_GREEN][i][j] = (*cube)[E_RED][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_RED][i][j] = (*cube)[E_BLUE][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_BLUE][i][j] = temp[k++];
}

void	move_left(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			temp[k++] = (*cube)[E_YELLOW][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_YELLOW][i][j] = (*cube)[E_ORANGE][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_ORANGE][i][j] = (*cube)[E_PURPLE][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_PURPLE][i][j] = (*cube)[E_RED][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_RED][i][j] = temp[k++];
}

void	move_right(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			temp[k++] = (*cube)[E_ORANGE][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_ORANGE][i][j] = (*cube)[E_YELLOW][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_YELLOW][i][j] = (*cube)[E_RED][i][j];
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_RED][i][j] = (*cube)[E_PURPLE][i][j];
	k = 0;
	for (int i = 0; i < ROW; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_PURPLE][i][j] = temp[k++];
}

void	move_up(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int j = 0; j <= 12; j++)
		temp[k++] = (*cube)[E_BLUE][0][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_BLUE][0][j] = (*cube)[E_PURPLE][0][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_PURPLE][0][j] = (*cube)[E_GREEN][0][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_GREEN][0][j] = (*cube)[E_YELLOW][0][j];
	k = 0;
	for (int j = 0; j <= 12; j++)
		(*cube)[E_YELLOW][0][j] = temp[k++];
}

void	move_down(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int j = 0; j <= 12; j++)
		temp[k++] = (*cube)[E_BLUE][2][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_BLUE][2][j] = (*cube)[E_YELLOW][2][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_YELLOW][2][j] = (*cube)[E_GREEN][2][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_GREEN][2][j] = (*cube)[E_PURPLE][2][j];
	k = 0;
	for (int j = 0; j <= 12; j++)
		(*cube)[E_PURPLE][2][j] = temp[k++];
}

