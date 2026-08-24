NAME        = philo

CC          = cc
CFLAGS      = -Wall -Wextra -Werror -pthread

SRC         = main.c \
              src/parsing.c \
              src/philo_brain.c \
              src/philo_routine.c \
              src/utils/get_time.c \
              src/utils/ft_atol.c \
              src/utils/print_mutex.c \
              src/reaper.c \
              src/utils/cleanup.c

OBJ         = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c philosopher.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
