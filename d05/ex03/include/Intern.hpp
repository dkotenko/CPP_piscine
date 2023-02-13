#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <map>
# include "AForm.hpp"
# include "InvalidFormNameException.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# define FORM_ROBOTOMY "robotomy request"
# define FORM_PRESIDENTIAL "presidental pardon"
# define FORM_SHRUBBERY "shrubbery creation"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		AForm *makeForm(std::string name, std::string target);

	private:
		AForm *newPresidentialPardonForm(std::string &target);
		AForm *newRobotomyRequestForm(std::string &target);
		AForm *newShrubberyCreationForm(std::string &target);
		std::map<std::string, AForm *(Intern::*)(std::string &)> forms;


};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */