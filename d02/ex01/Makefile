SRCS =		ClapTrap.cpp \
			main.cpp

INCLUDES =	ClapTrap.h

NAME =		ex01

FLAGS =		-Wall -Wextra -Werror

all: 		$(NAME)

$(NAME):	$(INCLUDES) $(SRCS)
			clang++ $(SRCS) $(FLAGS) -o $@

clean:
			@rm -rf *.o

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re