SRCS 	=	ClapTrap.cpp \
			ScavTrap.cpp \
			main.cpp

OBJS	= 	$(SRCS:%.cpp=%.o)

INCLUDES =	ClapTrap.hpp \
			ScavTrap.hpp

NAME 	=	ex01

FLAGS 	=	-Wall -Wextra -Werror
CC		= 	clang++

all: 		$(NAME)

$(NAME):	$(OBJS) $(INCLUDES) 
			$(CC) $(FLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -I ./ -c $< -o $@

clean:
			@rm -rf *.o

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re