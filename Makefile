# @--------------------------------------------------------------------------@ #
# |                                 Macros                                   | #
# @--------------------------------------------------------------------------@ #

NAME = rubik

INCLUDE_DIR = include/
SRC_DIR = src/
UTILS_DIR = utils/
MOVEMENT_DIR = movement/
OBJ_DIR = obj/

SRC_FILES = main.c

UTILS_FILES = cube.c canvas.c input.c menu.c

MOVEMENT_FILES = handler.c\
					uppercase.c uppercase_number.c uppercase_prime.c\
					lowercase.c lowercase_number.c lowercase_prime.c\

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
UTILS = $(addprefix $(UTILS_DIR), $(UTILS_FILES))
MOVEMENT = $(addprefix $(MOVEMENT_DIR), $(MOVEMENT_FILES))

VPATH = $(SRC_DIR)\
		 $(UTILS_DIR)\
		 $(MOVEMENT_DIR)

OBJ = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC))\
	  $(patsubst $(UTILS_DIR)%.c, $(OBJ_DIR)%.o, $(UTILS))\
	  $(patsubst $(MOVEMENT_DIR)%.c, $(OBJ_DIR)%.o, $(MOVEMENT))\

CC = clang
CFLAGS = -Wall -Wextra -Werror -MMD -MP
CPPFLAGS = -I $(INCLUDE_DIR)
RM = rm -rf

# @--------------------------------------------------------------------------@ #
# |                                 Targets                                  | #
# @--------------------------------------------------------------------------@ #

all: $(NAME)

clean:
	@$(RM) $(OBJ_DIR)
	@$(CLEAN_MSG)

fclean:
	@$(MAKE) -s clean
	@$(RM) $(NAME)
	@$(FCLEAN_MSG)

re:
	@$(MAKE) -s fclean
	@$(MAKE) -s all

.PHONY: all clean fclean re

$(NAME): $(OBJ_DIR) $(OBJ)
	@$(OBJ_MSG)
	@$(CC) -o $@ $(CFLAGS) $(CPPFLAGS) $(OBJ)
	@$(OUTPUT_MSG)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: %.c
	@$(COMPILE_MSG)
	@$(CC) -o $@ $(CFLAGS) $(CPPFLAGS) -c $<

-include $(OBJ:.o=.d)

# @--------------------------------------------------------------------------@ #
# |                                 Colors                                   | #
# @--------------------------------------------------------------------------@ #

T_BLACK = \033[30m
T_RED = \033[31m
T_GREEN = \033[32m
T_YELLOW = \033[33m
T_BLUE = \033[34m
T_MAGENTA = \033[35m
T_CYAN = \033[36m
T_WHITE = \033[37m

BOLD = \033[1m
ITALIC = \033[2m
UNDERLINE = \033[3m
STRIKETHROUGH = \033[4m

CLEAR_LINE = \033[1F\r\033[2K

RESET = \033[0m

# @--------------------------------------------------------------------------@ #
# |                                Messages                                  | #
# @--------------------------------------------------------------------------@ #

COMPILE_MSG = @echo "🧩 🦔 $(T_WHITE)$(BOLD)Compiling $<...$(RESET)"
OBJ_MSG = @echo "✅ 🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_GREEN)created successfully!$(RESET)"
OUTPUT_MSG = @echo "✅ 🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_GREEN)created successfully!$(RESET)"
CLEAN_MSG = @echo "🗑️  🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_RED)destroyed successfully!$(RESET)"
FCLEAN_MSG = @echo "🗑️  🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_RED)destroyed successfully!$(RESET)"
