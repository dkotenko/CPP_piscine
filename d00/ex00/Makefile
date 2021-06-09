NAME=megaphone
CC=clang++
FLAGS=-Wall -Wextra -Werror

SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	rm -rf *.o

fclean:
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re