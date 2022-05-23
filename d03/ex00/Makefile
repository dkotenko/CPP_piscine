SRCS =		ClapTrap.cpp \
			main.cpp

INCLUDES =	ClapTrap.hpp

NAME =		ex00

FLAGS =		-Wall -Wextra -Werror

CC = 		clang++

all: 		$(NAME)

$(NAME):	$(INCLUDES) $(SRCS)
			$(CC) $(SRCS) $(FLAGS) -o $@

clean:
			@rm -rf *.o

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re