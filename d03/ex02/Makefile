SRCS =		ClapTrap.cpp \
			FragTrap.cpp \
			ScavTrap.cpp \
			main.cpp

INCLUDES =	ClapTrap.hpp \
			FragTrap.hpp \
			ScavTrap.hpp

OBJS	= 	$(SRCS:%.cpp=%.o)

NAME =		ex02

FLAGS =		-Wall -Wextra -Werror
CC		= clang++

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