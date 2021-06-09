NAME=MyAwesomePhoneBook
CC=clang++
FLAGS=-Wall -Wextra -Werror

SRCS = phonebook.cpp \
	Contact.cpp
	
INCLUDES =	Contact.h

all: 		$(NAME)

$(NAME):	$(INCLUDES) $(SRCS)
			$(CC) $(SRCS) $(FLAGS) -o $@

clean:
			rm -rf *.o

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re