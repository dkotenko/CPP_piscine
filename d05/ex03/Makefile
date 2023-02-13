NAME       = ex03

INCDIR    = include
SRCDIR     = src
OBJDIR     = obj

SRCS_FILES = main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			FormNotSignedException.cpp \
			GradeTooLowException.cpp \
			GradeTooHighException.cpp \
			Intern.cpp \
			InvalidFormNameException.cpp
			
INC_FILES = Bureaucrat.hpp \
			AForm.hpp \
			assert.hpp \
			GradeTooHighException.hpp \
			GradeTooLowException.hpp \
			ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp \
			PresidentialPardonForm.hpp \
			FormNotSignedException.hpp \
			Intern.hpp \
			InvalidFormNameException.hpp


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