#include "../include/rubik.h"

void	move_front(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j <= 3; j++)
			temp[k++] = (*cube)[E_ORANGE][i][j];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_ORANGE][i][j] = (*cube)[E_GREEN][i][j];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_GREEN][i][j] = (*cube)[E_RED][i][j];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_RED][i][j] = (*cube)[E_BLUE][i][j];
	k = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j <= 3; j++)
			(*cube)[E_BLUE][i][j] = temp[k++];
}

void	move_back(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 9; j <= 12; j++)
			temp[k++] = (*cube)[E_ORANGE][i][j];
	for (int i = 0; i < 3; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_ORANGE][i][j] = (*cube)[E_BLUE][i][j];
	for (int i = 0; i < 3; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_BLUE][i][j] = (*cube)[E_RED][i][j];
	for (int i = 0; i < 3; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_RED][i][j] = (*cube)[E_GREEN][i][j];
	k = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 9; j <= 12; j++)
			(*cube)[E_GREEN][i][j] = temp[k++];
}

void	move_right(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int j = 0; j <= 12; j++)
		temp[k++] = (*cube)[E_ORANGE][2][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_ORANGE][2][j] = (*cube)[E_YELLOW][2][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_YELLOW][2][j] = (*cube)[E_RED][2][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_RED][2][j] = (*cube)[E_WHITE][2][j];
	k = 0;
	for (int j = 0; j <= 12; j++)
		(*cube)[E_WHITE][2][j] = temp[k++];
}

void	move_left(char ****cube)
{
	char temp[12];

	int k = 0;
	for (int j = 0; j <= 12; j++)
		temp[k++] = (*cube)[E_YELLOW][0][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_YELLOW][0][j] = (*cube)[E_ORANGE][0][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_ORANGE][0][j] = (*cube)[E_WHITE][0][j];
	for (int j = 0; j <= 12; j++)
		(*cube)[E_WHITE][0][j] = (*cube)[E_RED][0][j];
	k = 0;
	for (int j = 0; j <= 12; j++)
		(*cube)[E_RED][0][j] = temp[k++];
}

void	move_up(char ****cube)
{
	
}

void	move_down(char ****cube)
{

}

