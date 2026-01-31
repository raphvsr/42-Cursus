
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_strlen.c \
	ft_putnbr.c ft_puthex.c ft_putunbr.c ft_putptr.c

OBJS = $(SRC:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
