




CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

SRC_C = client.c 
SRC_S = server.c

all: $(LIBFT) client server

$(LIBFT):
	make -C ./libft/

server: $(SRC_S) $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_S) $(LIBFT) -o server

client: $(SRC_C) $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_C) $(LIBFT) -o client


clean:
	make clean -C ./libft/

fclean: clean
	make fclean -C ./libft/
	rm -f client server

re: fclean all


.PHONY: all clean fclean re
