CC := cc
CFLAGS := -Wall -Wextra -Werror
PROGRAM_NAMES := ft_cat
OBJS := $(PROGRAM_NAMES).o

.PHONY: all fclean clean re

all: $(PROGRAM_NAMES)

$(PROGRAM_NAMES): $(OBJS) 
	$(CC) $(CFLAGS) $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(PROGRAM_NAMES)

clean:
	rm -f $(OBJS)

re: fclean all
