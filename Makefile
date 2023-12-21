# ========================================================================== #

# <-- Color Library --> #

# <-- Text Color --> #
T_BLACK = \033[30m
T_RED = \033[31m
T_GREEN = \033[32m
T_YELLOW = \033[33m
T_BLUE = \033[34m
T_MAGENTA = \033[35m
T_CYAN = \033[36m
T_WHITE = \033[37m

# <-- Text Style --> #
BOLD = \033[1m
ITALIC = \033[2m
UNDERLINE = \033[3m
STRIKETHROUGH = \033[4m

# <-- Background Color --> #
B_BLACK = \033[40m
B_RED = \033[41m
B_GREEN = \033[42m
B_YELLOW = \033[43m
B_BLUE = \033[44m
B_MAGENTA = \033[45m
B_CYAN = \033[46m
B_WHITE = \033[47m

# <-- Reset Everything --> #
RESET = \033[0m

# ========================================================================== #

# <-- Library's Name --> #
NAME = rubik

# <-- Compilation Command --> #
CC = gcc

# <-- Compilation Flags --> #
#CFLAGS = -Wall -Wextra -Werror
CFLAGS = 

# <-- Remove Command -->#
RM = rm -rf

# <-- Directories --> #
SRC_DIR = src/
UTILS_DIR = utils/
OBJ_DIR = obj/

# <-- Files --> #
SRC_FILES = main.c
UTILS_FILES = cube.c canvas.c movements.c \
				input.c handler.c

# <-- Directories + Files --> #
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
UTILS = $(addprefix $(UTILS_DIR), $(UTILS_FILES))

# <-- Objects --> #
OBJ_SRC = $(SRC:%.c=%.o)
OBJ_UTILS = $(UTILS:%.c=%.o)
OBJ = $(OBJ_SRC) $(OBJ_UTILS)

# ========================================================================== #

# <-- Main Target --> #
all: $(NAME)

# <--Library Creation-->#
$(NAME): $(OBJ)
	@echo "✅ 🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_GREEN)created successfully$(RESET)"
	@gcc $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "✅ 🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_GREEN)created successfully$(RESET)"
	@mkdir -p $(OBJ_DIR)
	@mv $(OBJ) $(OBJ_DIR)

# <-- Objects Creation --> #
%.o: %.c
	@echo "🧩 🦔 $(T_WHITE)$(BOLD)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "🔨 🦔 $(T_BLUE)$(BOLD)$@ $(RESET)$(T_GREEN)created!$(RESET)"

# <-- Objects Destruction --> #
clean:
	@$(RM) $(OBJ_DIR)
	@echo "🗑️  🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_RED)destroyed successfully$(RESET)"

# <-- Clean Execution + bfl.a Destruction --> #
fclean: clean
	@$(RM) $(NAME)
	@echo "🗑️  🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_RED)destroyed successfully$(RESET)"

# <-- Fclean Execution + All Execution --> #
re: fclean all

# <-- Targets Declaration --> #
.PHONY = all clean fclean re test

# ========================================================================== #
