SRCS =		Pony.cpp \
			main.cpp

INCLUDES =	Pony.hpp

NAME =		Pony

FLAGS =		-Wall -Wextra -Werror

all: 		$(NAME)

$(NAME):	$(INCLUDES) $(SRCS)
			clang++ $(SRCS) $(FLAGS) -o $@

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re