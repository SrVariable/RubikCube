#include "../include/rubik.h"

/**
 * @brief Handle uppercase movement
 * 
 * @param cube The address of the cube
 * @param input The input to handle
 * 
 * @return - 0 if the movement was handled successfully
 * @return - 1 if the user wants to quit
*/
static int	handle_uppercase(char ****cube, char input)
{
	switch (input)
	{
	case 'B':
		move_back(cube);
		return (0);
	case 'F':
		move_front(cube);
		return (0);
	case 'L':
		move_left(cube);
		return (0);
	case 'R':
		move_right(cube);
		return (0);
	case 'U':
		move_up(cube);
		return (0);
	case 'D':
		move_down(cube);
		return (0);
	case 'M':
		move_middle(cube);
		return (0);
	case 'E':
		move_equator(cube);
		return (0);
	case 'S':
		move_side(cube);
		return (0);
	case 'Q':
		printf("Quitting...\n");
		return (1);
	default:
		printf("Invalid movement, press H for help!\n");
		return (0);
	}
}

/**
 * @brief Handle uppercase with a number movement
 * 
 * @param cube The address of the cube
 * @param input The input to handle
 * 
 * @return - 0 if the movement was handled successfully
 * @return - 1 if the user wants to quit
*/
static int	handle_uppercase_number(char ****cube, char input)
{
	switch (input)
	{
	case 'B':
		move_back_2(cube);
		return (0);
	case 'F':
		move_front_2(cube);
		return (0);
	case 'L':
		move_left_2(cube);
		return (0);
	case 'R':
		move_right_2(cube);
		return (0);
	case 'U':
		move_up_2(cube);
		return (0);
	case 'D':
		move_down_2(cube);
		return (0);
	case 'M':
		move_middle_2(cube);
		return (0);
	case 'E':
		move_equator_2(cube);
		return (0);
	case 'S':
		move_side_2(cube);
		return (0);
	case 'Q':
		printf("Quitting...\n");
		return (1);
	default:
		printf("Invalid movement, press H for help!\n");
		return (0);
	}
}

/**
 * @brief Handle uppercase prime movement
 * 
 * @param cube The address of the cube
 * @param input The input to handle
 * 
 * @return - 0 if the movement was handled successfully
 * @return - 1 if the user wants to quit
*/
static int	handle_uppercase_prime(char ****cube, char input)
{
	switch (input)
	{
	case 'B':
		move_back_prime(cube);
		return (0);
	case 'F':
		move_front_prime(cube);
		return (0);
	case 'L':
		move_left_prime(cube);
		return (0);
	case 'R':
		move_right_prime(cube);
		return (0);
	case 'U':
		move_up_prime(cube);
		return (0);
	case 'D':
		move_down_prime(cube);
		return (0);
	case 'M':
		move_middle_prime(cube);
		return (0);
	case 'E':
		move_equator_prime(cube);
		return (0);
	case 'S':
		move_side_prime(cube);
		return (0);
	case 'Q':
		printf("Quitting\n");
		return (1);
	default:
		printf("Invalid movement, press H for help!\n");
		return (0);
	}
	return (0);
}

/**
 * @brief Handle lowercase movement
 * 
 * @param cube The address of the cube
 * @param input The input to handle
 * 
 * @return - 0 if the movement was handled successfully
 * @return - 1 if the user wants to quit
*/
static int	handle_lowercase(char ****cube, char input)
{
	switch (input)
	{
	case 'x':
		rotate_x(cube);
		return (0);
	case 'y':
		rotate_y(cube);
		return (0);
	case 'z':
		rotate_z(cube);
		return (0);
	case 'u':
		move_u(cube);
		return (0);
	case 'r':
		move_r(cube);
		return (0);
	case 'f':
		move_f(cube);
		return (0);
	case 'd':
		move_d(cube);
		return (0);
	case 'l':
		move_l(cube);
		return (0);
	case 'b':
		move_b(cube);
		return (0);
	case 'q':
		printf("Quitting...\n");
		return (1);
	}
	return (0);
}

/**
 * @brief Handle lowercase with number movement
 * 
 * @param cube The address of the cube
 * @param input The input to handle
 * 
 * @return - 0 if the movement was handled successfully
 * @return - 1 if the user wants to quit
*/
static int	handle_lowercase_number(char ****cube, char input)
{
	switch (input)
	{
	case 'x':
		rotate_x_2(cube);
		return (0);
	case 'y':
		rotate_y_2(cube);
		return (0);
	case 'z':
		rotate_z_2(cube);
		return (0);
	case 'u':
		move_u_2(cube);
		return (0);
	case 'r':
		move_r_2(cube);
		return (0);
	case 'f':
		move_f_2(cube);
		return (0);
	case 'd':
		move_d_2(cube);
		return (0);
	case 'l':
		move_l_2(cube);
		return (0);
	case 'b':
		move_b_2(cube);
		return (0);
	case 'q':
		printf("Quitting...\n");
		return (1);
	}
	return (0);
}

/**
 * @brief Handle lowercase prime movement
 * 
 * @param cube The address of the cube
 * @param input The input to handle
 * 
 * @return - 0 if the movement was handled successfully
 * @return - 1 if the user wants to quit
*/
static int	handle_lowercase_prime(char ****cube, char input)
{
	switch (input)
	{
	case 'x':
		rotate_x_prime(cube);
		return (0);
	case 'y':
		rotate_y_prime(cube);
		return (0);
	case 'z':
		rotate_z_prime(cube);
		return (0);
	case 'u':
		move_u_prime(cube);
		return (0);
	case 'r':
		move_r_prime(cube);
		return (0);
	case 'f':
		move_f_prime(cube);
		return (0);
	case 'd':
		move_d_prime(cube);
		return (0);
	case 'l':
		move_l_prime(cube);
		return (0);
	case 'b':
		move_b_prime(cube);
		return (0);
	case 'q':
		printf("Quitting...\n");
		return (1);
	}
	return (0);
}

/**
 * @brief Handle movement when is single character
 * 
 * @param cube The address of the cube
 * @param input The input to handle
 * 
 * @return - 0 if the movement was handled successfully
 * @return - 1 if the user wants to quit
*/
static int	handle_single_character(char ****cube, char input)
{
	if (islower(input))
		return (handle_lowercase(cube, input));
	return (handle_uppercase(cube, input));
}

/**
 * @brief Handle movement when is double character
 * 
 * @param cube The address of the cube
 * @param input The input to handle
 * 
 * @return - 0 if the movement was handled successfully
 * @return - 1 if the user wants to quit
*/
static int	handle_double_character(char ****cube, char *input)
{
	if (input[1] == '2')
		return (islower(input[0]) ? handle_lowercase_number(cube, input[0]) : handle_uppercase_number(cube, input[0]));
	else if (input[1] == '\'')
		return (islower(input[0]) ? handle_lowercase_prime(cube, input[0]) : handle_uppercase_prime(cube, input[0]));
	return (0);
}

/**
 * @brief Handle the movement
 * 
 * @param cube The address of the cube
 * @param input The input to handle
 * 
 * @return - 0 if the movement was handled successfully
 * @return - 1 if the user wants to quit
 * @return - -1 if an error occured
 */
int	handle_movement(char ****cube, char *input)
{
	int	status;

	status = 0;
	for (int i = 0; input[i]; i++)
	{
		if (input[i] == 'H' || input[i] == 'h')
		{
			display_help_menu();
			return (0);
		}
		else if (input[i + 1] && (input[i + 1] == '\'' || input[i + 1] == '2'))
			status = handle_double_character(cube, &input[i++]);
		else
			status = handle_single_character(cube, input[i]);
		if (status != 0)
			break ;
	}
	return (status);
}
