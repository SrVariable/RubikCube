#include "../include/rubik.h"

/**
 * @brief Display the help menu
 * 
 * @details Display the help menu on the standard output
 */
void	display_help_menu(void)
{
	printf("\
╔════════════════════════════╗\n\
║          Help Menu         ║\n\
╚════════════════════════════╝\n\
Movements\n\
\nUppercase:\n\
- B: Rotate Back face\n\
- F: Rotate Front face\n\
- L: Rotate Left face\n\
- R: Rotate Right face\n\
- U: Rotate Up face\n\
- D: Rotate Down face\n\
- M: Rotate the middle layer parallel to the Right and Left faces\n\
- E: Rotate the middle layer parallel to the Up and Down faces\n\
- S: Rotate the middle layer parallel to the Front and B faces\n\
\nUppercase + Number:\n\
- B2: Rotate Back face twice\n\
- F2: Rotate Front face twice\n\
- L2: Rotate Left face twice\n\
- R2: Rotate Right face twice\n\
- U2: Rotate Up face twice\n\
- D2: Rotate Down face twice\n\
- M2: Rotate the middle layer parallel to the Right and Left faces\n\
- E2: Rotate the middle layer parallel to the Up and Down faces\n\
- S2: Rotate the middle layer parallel to the Front and B faces\n\
\nUppercase + Prime:\n\
- B\': Reverse rotate Back face\n\
- F\': Reverse rotate Front face\n\
- L\': Reverse rotate Left face\n\
- R\': Reverse rotate Right face\n\
- U\': Reverse rotate Up face\n\
- D\': Reverse rotate Down face\n\
- M\': Reverse rotate the middle layer parallel to the Right and Left faces\n\
- E\': Reverse rotate the middle layer parallel to the Up and Down faces\n\
- S\': Reverse rotate the middle layer parallel to the Front and B faces\n\
\nLowercase:\n\
- b: Rotate Back face two layers\n\
- f: Rotate Front face two layers\n\
- l: Rotate Left face two layers\n\
- r: Rotate Right face two layers\n\
- u: Rotate Up face two layers\n\
- d: Rotate Down face two layers\n\
- x: Rotate the cube on the x axis\n\
- y: Rotate the cube on the y axis\n\
- z: Rotate the cube on the z axis\n\
\nLowercase + Number:\n\
- b2: Rotate Back face two layers twice\n\
- f2: Rotate Front face two layers twice\n\
- l2: Rotate Left face two layers twice\n\
- r2: Rotate Right face two layers twice\n\
- u2: Rotate Up face two layers twice\n\
- d2: Rotate Down face two layers twice\n\
- x2: Rotate the cube on the x axis twice\n\
- y2: Rotate the cube on the y axis twice\n\
- z2: Rotate the cube on the z axis twice\n\
\nLowercase + Prime:\n\
- b\': Reverse rotate Back face two layers\n\
- f\': Reverse rotate Front face two layers\n\
- l\': Reverse rotate Left face two layers\n\
- r\': Reverse rotate Right face two layers\n\
- u\': Reverse rotate Up face two layers\n\
- d\': Reverse rotate Down face two layers\n\
- x\': Reverse rotate the cube on the x axis\n\
- y\': Reverse rotate the cube on the y axis\n\
- z\': Reverse rotate the cube on the z axis\n\
\nHelp\n\
- H: Show help menu\n\
- h: Show help menu\n\
\nExit\n\
- Q: Quit the game\n\
- q: Quit the game\n");
	getchar();
	printf("\033[1m\nPress Enter to leave...\033[0m");
	while (getchar() != '\n');
}
