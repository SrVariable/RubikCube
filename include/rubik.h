#ifndef RUBIK_H
# define RUBIK_H

# define FACE 6
# define ROW 3
# define COLUMN 3
# define SIZE 30

typedef enum e_color
{
	E_WHITE,
	E_YELLOW,
	E_GREEN,
	E_RED,
	E_BLUE,
	E_ORANGE
}	t_color;

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	***create_cube(void);
char	***destroy_cube(char ****cube);
void 	display_cube(char ***cube);

char	**create_canvas(void);
char	**destroy_canvas(char ***canvas);
void	display_canvas(char **canvas);

void	move_front(char ****cube);
void	move_back(char ****cube);
void	move_right(char ****cube);
void	move_left(char ****cube);
void	move_up(char ****cube);

#endif
