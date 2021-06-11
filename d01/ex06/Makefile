SRCS =		Weapon.cpp \
 			HumanA.cpp \
 			HumanB.cpp \
			main.cpp

INCLUDES =	Weapon.hpp \
			HumanA.hpp \
			HumanB.hpp

NAME =		Weapon

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