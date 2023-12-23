#include "../include/rubik.h"

int	user_input(char ****cube)
{
	char	*input;
	int		status;

	input = (char *)calloc(1024, sizeof(char));
	if (!input)
		return (-1);
	printf("Introduce a movement (B, F, L, R, U, D) or quit (Q): ");
	scanf("%1024s", input);
	status = handle_movement(cube, input);
	free(input);
	return (status);
}
