#include "../include/rubik.h"

int	user_input(char ****cube)
{
	char	*input;
	int		status;

	input = (char *)calloc(1024, sizeof(char));
	if (!input)
		return (-1);
	printf("Introduce a movement: ");
	if (scanf("%1023s", input) == 0)
		return (-1);
	status = handle_movement(cube, input);
	free(input);
	return (status);
}
