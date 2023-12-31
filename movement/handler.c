#include "../include/rubik.h"

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

static int	handle_lowercase(char ****cube, char input)
{
	switch (input)
	{
	case 'q':
		printf("Quitting...\n");
		return (1);
	}
	printf("Lowercase\n");
	return (0);
}

static int	handle_lowercase_prime(char ****cube, char input)
{
	switch (input)
	{
	case 'q':
		printf("Quitting...\n");
		return (1);
	}
	printf("Lowercase prime\n");
	return (0);
}

static int	handle_single_character(char ****cube, char input)
{
	if (islower(input))
		return (handle_lowercase(cube, input));
	return (handle_uppercase(cube, input));
}

static int	handle_double_character(char ****cube, char *input)
{
	if (input[1] == '2')
		return (handle_uppercase_number(cube, input[0]));
	else if (input[1] == '\'')
		return (islower(input[0]) ? handle_lowercase_prime(cube, input[0]) : handle_uppercase_prime(cube, input[0]));
	return (0);
}

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
