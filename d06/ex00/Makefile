NAME       = convert

INCDIR    = include
SRCDIR     = src
OBJDIR     = obj

SRCS_FILES = main.cpp \
			Converter.cpp \
			AConvType.cpp \
			ConvInt.cpp \
			ConvChar.cpp \
			ConvFloat.cpp \
			ConvDouble.cpp
			

INC_FILES = Converter.hpp \
			AConvType.hpp \
			ConvChar.hpp \
			ConvInt.hpp \
			ConvFloat.hpp \
			ConvDouble.hpp
			


OBJS_FILES = $(SRCS_FILES:%.cpp=%.o)

OBJS		:= $(addprefix $(OBJDIR)/, $(OBJS_FILES))
INCLUDES	:= $(addprefix $(INCDIR)/, $(INC_FILES))

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(OBJDIR) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJDIR):
	@mkdir -p $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(INCLUDES) | $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@ 


clean:
	@-rm -rf $(OBJDIR)

fclean: clean
	@-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re