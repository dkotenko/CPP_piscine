#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
void checkGrade(int grade) {
	if (grade < MAX_GRADE) {
		throw GradeTooHighException();
	} else if (grade > MIN_GRADE) {
		throw GradeTooLowException();
	}
}

Form::Form() :
	m_name("default Name"),
	m_signed(false),
	m_gradeToSign(MIN_GRADE),
	m_gradeToExecute(MIN_GRADE)
{
	checkGrade(m_gradeToSign);
	checkGrade(m_gradeToExecute);
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) :
	m_name(name),
	m_signed(false),
	m_gradeToSign(gradeToSign),
	m_gradeToExecute(gradeToExecute)
{
	checkGrade(m_gradeToSign);
	checkGrade(m_gradeToExecute);
}

Form::Form( const Form & src )
{
	m_name = src->getName();
	m_gradeToSign = src->getGradeToSign();
	m_gradeToExecute = src->getGradeToExecute();
	m_signed = false;
	checkGrade(m_gradeToSign);
	checkGrade(m_gradeToExecute);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		m_name = rhs.getName();
		m_signed = rhs.isSigned();
		m_gradeToSign = rhs.getGradeToSign();
		m_gradeToExecute = rhs.getGradeToExecute();
		checkGrade(m_gradeToSign);
		checkGrade(m_gradeToExecute);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form: name = " << i.getName() << ", isSigned = " << i.isSigned() << \
	", gradeToSign = " << i.getGradeToSign << ", gradeToExecute = " << i.getGradeToExecute() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void beSigned(Bureaucrat const & bureaucrat) {
	if (bureaucrat->getGrade > m_gradeToSign) {
		throw Bureaucrat::GradeTooLowException();
	}
	m_signed = true;
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string getName() {
	return m_name;
}

bool isSigned() {
	return m_isSigned;
}

int getGradeToSign() {
	return m_gradeToSign;
}

int getGradeToExecute() {
	return m_gradeToExecute;
}

/* ************************************************************************** */