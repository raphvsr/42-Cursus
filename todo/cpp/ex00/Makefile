NAME = megaphone

all: $(NAME)

$(NAME): megaphone.cpp
	c++ -Wall -Wextra -Werror -std=c++98 megaphone.cpp -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
