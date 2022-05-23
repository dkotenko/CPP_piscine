SRCS =		ClapTrap.cpp \
			FragTrap.cpp \
			ScavTrap.cpp \
			main.cpp

INCLUDES =	ClapTrap.hpp \
			FragTrap.hpp \
			ScavTrap.hpp

NAME =		ex02

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