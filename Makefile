CC = cc
CFLAGS = -Wall -Wextra  -g
SRCS = push_swap.c commands.c int_regulator.c atoi.c make_it_nice.c helper.c sort.c sort_first.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap


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
