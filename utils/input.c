#include "../include/rubik.h"

/**
 * @brief Read the user input
 * 
 * @param cube The address of the cube
 * 
 * @return - 1 if the user wants to quit
 * @return - 0 if the movement was handled successfully
 * @return - -1 if an error occured
 */
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
