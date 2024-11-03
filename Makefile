# Variables
CC = cc
SRCS = main.c commands.c driver.c int_regulator.c 
OBJS = $(SRCS:.c=.o)
NAME = push_swap

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
