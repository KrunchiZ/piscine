NAME	= rush-01
CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g3

SRC = \
	  arg_is_invalid.c	ft_strlen.c		\
	  parse_clue.c		solver.c		\
	  col_is_bad.c		row_is_bad.c	\
	  main.c

.PHONY = all clean fclean re bonus

all: $(NAME)

bonus: all

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) -I. $^ -o $(NAME)
	@echo "Compiling Rush-01..."

fclean: clean
	rm -f $(NAME)

clean:
