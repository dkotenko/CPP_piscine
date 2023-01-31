#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Bureaucrat::Bureaucrat() :
	name("default Name"),
	grade(MIN_GRADE)
{
}

void checkGrade(int grade) {
	if (grade < MAX_GRADE) {
		throw GradeTooHighException();
	} else if (grade > MIN_GRADE) {
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const std::string name, int grade) :
	name(name),
	grade(grade)
{
	checkGrade();
}


Bureaucrat::Bureaucrat( const Bureaucrat & src ) :
	name(src.getName()),
	grade(src.getGrade())
{
	checkGrade();
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
		checkGrade();
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
		throw GradeTooLowException();
	}
	grade++;
}

void Bureaucrat::incrementGrade() {
	if (grade - 1 < MAX_GRADE) {
		throw GradeTooHighException();
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

void Bureaucrat::signForm(Form const &form) {
	if (form.isSigned) {
		std::cout << getName() << " couldn't sign " << form.getName() << " because it has already been signed" <<  std::endl;
	} else if (form.getGradeToSign() < getGrade()) {
		std::cout << getName() << " couldn't sign " << form.getName() << " because bureacrat's grade is too low" <<  std::endl;
	} else {
		form.beSigned();
		std::cout << getName() << " signed " << form.getName() <<  std::endl;
	}
}

/* ************************************************************************** */