CC := cc
CFLAGS := -Wall -Wextra -Werror -Iincludes
OBJ_FILES := ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
SRC_PATH := srcs
OBJS := $(addprefix $(SRC_PATH)/, $(OBJ_FILES))

.PHONY: all fclean clean re

all: libft.a

libft.a: $(OBJS) 
	ar rcs $@ $^

$(SRC_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f libft.a

clean:
	rm -f $(OBJS)

re: fclean all
