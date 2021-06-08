NAME=MyAwesomePhoneBook
CC=clang++
FLAGS=-Wall -Wextra -Werror

SRCS = phonebook.cpp \
	Contact.cpp

all:
	$(CC) $(FLAGS) -o $(NAME) $(SRCS)

fclean:
	@rm -rf $(NAME)

PHONY: all fclean