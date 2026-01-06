NAME = my_program

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = src/main.c
OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_PATH)

re: fclean all

