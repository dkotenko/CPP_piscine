#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
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
		throw GradeTooHighException();
	} else if (grade > MIN_GRADE) {
		throw GradeTooLowException();
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

void Bureaucrat::signForm(AForm &form) {
	if (form.isSigned()) {
		std::cout << getName() << " couldn't sign " << form.getName() << " because it has already been signed" <<  std::endl;
	} else if (form.getGradeToSign() < getGrade()) {
		std::cout << getName() << " couldn't sign " << form.getName() << " because bureacrat's grade is too low" <<  std::endl;
	} else {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() <<  std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) {
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed form " << form.getName() << std::endl;
	}
	catch(FormNotSignedException &e)
	{
		std::cerr << *this << " couldn’t execute form " << form.getName() << ": " << e.what() << std::endl;
	}
	catch(GradeTooLowException &ee)
	{
		std::cerr << *this << " couldn’t execute form " << form.getName() << ": " << ee.what() << std::endl;
	}
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