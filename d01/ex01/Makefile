SRCS =		ex01.cpp

NAME =		ex01

FLAGS =		-Wall -Wextra -Werror

all: 		$(NAME)

$(NAME):	$(SRCS)
			clang++ $(SRCS) $(FLAGS) -o $@

clean:
			@rm -rf *.o

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re