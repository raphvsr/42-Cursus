# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: <your_login> <your_login@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/18 00:00:00 by <your_login>      #+#    #+#              #
#    Updated: 2026/04/18 00:00:00 by <your_login>     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -Iinc -Ilibft
LIBFT_DIR   = libft
LIBFT       = $(LIBFT_DIR)/libft.a

SRC_DIR     = src/
OBJ_DIR     = obj/

SRC_FILES   = $(SRC_DIR)main.c \
              $(SRC_DIR)commands/commands_push.c \
              $(SRC_DIR)commands/commands_rev_rotate.c \
              $(SRC_DIR)commands/commands_rotate.c \
              $(SRC_DIR)commands/commands_swap.c \
              $(SRC_DIR)algorithm/algorithm.c \
              $(SRC_DIR)algorithm/a_to_b.c \
              $(SRC_DIR)algorithm/b_to_a.c \
              $(SRC_DIR)parser/split.c \
              $(SRC_DIR)parser/stack_init.c \
              $(SRC_DIR)parser/error_handling.c \
              $(SRC_DIR)utils/stack_utils.c

OBJ         = $(SRC_FILES:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
