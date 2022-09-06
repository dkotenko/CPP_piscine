SRCS =		Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			main.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

OBJS	= 	$(SRCS:%.cpp=%.o)

INCLUDES =	Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongCat.hpp \
			WrongAnimal.hpp

NAME =		ex00

FLAGS =		-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

CC = 		clang++

all: 		$(NAME)

$(NAME):	$(OBJS) $(INCLUDES)
			$(CC) $(FLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -I . -c $< -o $@

clean:
			@rm -rf *.o

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re