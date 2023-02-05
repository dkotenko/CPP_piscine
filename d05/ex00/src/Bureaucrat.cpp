#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/*
Bureaucrat::GradeTooHighException
Bureaucrat::GradeTooLowException
*/


Bureaucrat::Bureaucrat() :
	name("default Name"),
	grade(MIN_GRADE)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) :
	name(name),
	grade(grade)
{
	if (grade < MAX_GRADE) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > MIN_GRADE) {
		throw Bureaucrat::GradeTooLowException();
	}
}


Bureaucrat::Bureaucrat( const Bureaucrat & src ) :
	name(src.getName()),
	grade(src.getGrade())
{
	grade = src.getGrade();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << "Bureaucrat: name = " << i.getName() << ", grade = " << i.getGrade() <<std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/



void Bureaucrat::decrementGrade() {
	if (grade + 1 > MIN_GRADE) {
		throw Bureaucrat::GradeTooLowException();
	}
	grade++;
}

void Bureaucrat::incrementGrade() {
	if (grade - 1 < MAX_GRADE) {
		throw Bureaucrat::GradeTooHighException();
	}
	grade--;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Bureaucrat::getGrade() const {
	return grade;
}

const std::string Bureaucrat::getName() const {
	return name;
}



/* ************************************************************************** */