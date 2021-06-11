SRCS =		Zombie.cpp \
 			ZombieHorde.cpp \
			main.cpp

INCLUDES =	Zombie.hpp \
			ZombieHorde.hpp

NAME =		ZombieHorde

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