#ifndef RUBIK_H
# define RUBIK_H

# define FACE 6
# define ROW 3
# define COLUMN 3
# define SIZE 20

# include <ctype.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef enum e_option
{
	PLAY = 1,
	HELP,
	QUIT
}	t_option;

typedef enum e_color
{
	YELLOW,
	ORANGE,
	GREEN,
	BLUE,
	RED,
	PURPLE
}	t_color;

// cube.c

char	***create_cube(void);
char	***destroy_cube(char ****cube);
void	draw_cube(char ***canvas, char ***cube);

// canvas.c

char	**create_canvas(void);
char	**destroy_canvas(char ***canvas);
void	display_canvas(char **canvas);

// uppercase.c

void	move_back(char ****cube);
void	move_front(char ****cube);
void	move_left(char ****cube);
void	move_right(char ****cube);
void	move_up(char ****cube);
void	move_down(char ****cube);
void	move_middle(char ****cube);
void	move_equator(char ****cube);
void	move_side(char ****cube);

// uppercase_number.c

void	move_back_2(char ****cube);
void	move_front_2(char ****cube);
void	move_left_2(char ****cube);
void	move_right_2(char ****cube);
void	move_up_2(char ****cube);
void	move_down_2(char ****cube);
void	move_middle_2(char ****cube);
void	move_equator_2(char ****cube);
void	move_side_2(char ****cube);

// uppercase_prime.c

void	move_back_prime(char ****cube);
void	move_front_prime(char ****cube);
void	move_left_prime(char ****cube);
void	move_right_prime(char ****cube);
void	move_up_prime(char ****cube);
void	move_down_prime(char ****cube);
void	move_middle_prime(char ****cube);
void	move_equator_prime(char ****cube);
void	move_side_prime(char ****cube);

// lovercase.c
void	rotate_x(char ****cube);
void	rotate_y(char ****cube);
void	rotate_z(char ****cube);
void	move_u(char ****cube);
void	move_r(char ****cube);
void	move_f(char ****cube);
void	move_d(char ****cube);
void	move_l(char ****cube);
void	move_b(char ****cube);

// lowercase_number.c

void	rotate_x_2(char ****cube);
void	rotate_y_2(char ****cube);
void	rotate_z_2(char ****cube);
void	move_u_2(char ****cube);
void	move_r_2(char ****cube);
void	move_f_2(char ****cube);
void	move_d_2(char ****cube);
void	move_l_2(char ****cube);
void	move_b_2(char ****cube);


// lowercase_prime.c

void	rotate_x_prime(char ****cube);
void	rotate_y_prime(char ****cube);
void	rotate_z_prime(char ****cube);
void	move_u_prime(char ****cube);
void	move_r_prime(char ****cube);
void	move_f_prime(char ****cube);
void	move_d_prime(char ****cube);
void	move_l_prime(char ****cube);
void	move_b_prime(char ****cube);

// input.c

int		user_input(char ****cube);

// movement.c

int		handle_movement(char ****cube, char *input);

// menu.c

void	display_help_menu(void);

#endif
