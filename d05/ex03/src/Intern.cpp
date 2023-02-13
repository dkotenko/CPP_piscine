#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	forms[FORM_PRESIDENTIAL] = &Intern::newPresidentialPardonForm;
	forms[FORM_ROBOTOMY] = &Intern::newRobotomyRequestForm;
	forms[FORM_SHRUBBERY] = &Intern::newShrubberyCreationForm;
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	o << "Intern";
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AForm *Intern::newPresidentialPardonForm(std::string &target) {
	return new PresidentialPardonForm(target);
}

AForm *Intern::newRobotomyRequestForm(std::string &target) {
	return new RobotomyRequestForm(target);
}

AForm *Intern::newShrubberyCreationForm(std::string &target) {
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target) {
	try {
		return forms.count(name) ? (this->*(forms[name]))(target) : throw InvalidFormNameException();
	} catch (InvalidFormNameException &e) {
		std::cout << "error: " << e.what() << std::endl;
		return newShrubberyCreationForm(target);
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */