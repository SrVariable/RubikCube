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
- B: Move back\n\
- F: Move front\n\
- L: Move left\n\
- R: Move right\n\
- U: Move up\n\
- D: Move down\n\
- M: Move middle\n\
- E: Move equator\n\
- S: Move side\n\
\nUppercase + Number:\n\
- B2: Move back twice\n\
- F2: Move front twice\n\
- L2: Move left twice\n\
- R2: Move right twice\n\
- U2: Move up twice\n\
- D2: Move down twice\n\
- M2: Move middle twice\n\
- E2: Move equator twice\n\
- S2: Move side twice\n\
\nUppercase + Prime:\n\
- B\': Move reverse back\n\
- F\': Move reverse front\n\
- L\': Move reverse left\n\
- R\': Move reverse right\n\
- U\': Move reverse up\n\
- D\': Move reverse down\n\
- M\': Move reverse middle\n\
- E\': Move reverse equator\n\
- S\': Move reverse side\n\
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
