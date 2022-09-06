NAME       = ex00

INCLUDE    = includes
SRCDIR     = srcs
OBJDIR     = objs

SRCS_FILES = main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

HEADER_FILES = Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp


SRCS       := $(addprefix $(SRCDIR)/, $(SRCS_FILES))
OBJS       := $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
HEADERS     := $(addprefix $(INCLUDE)/, $(HEADER_FILES))

CC         = clang++
CFLAGS     = -Wall -Wextra -Werror -std=c++98

all: $(OBJDIR) $(NAME)
$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@
$(OBJDIR):
	@mkdir -p $@

clean:
	@-rm -rf $(OBJDIR)

fclean: clean
	@-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re