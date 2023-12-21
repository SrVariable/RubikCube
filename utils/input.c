#include "../include/rubik.h"

int	user_input(char ****cube)
{
	char	input;
	int		status;

	printf("Introduce a movement (B, F, L, R, U, D): ");
	scanf("%c", &input);
	getchar();
	status = handle_movement(cube, toupper(input));
	return (status);
}
