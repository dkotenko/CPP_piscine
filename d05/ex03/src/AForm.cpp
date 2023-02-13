#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) :
	m_name(name),
	m_signed(false),
	m_gradeToSign(gradeToSign),
	m_gradeToExecute(gradeToExecute)
{
	checkGrade(m_gradeToSign);
	checkGrade(m_gradeToExecute);
}

AForm::AForm( const AForm & src )
{
	m_name = src.getName();
	m_gradeToSign = src.getGradeToSign();
	m_gradeToExecute = src.getGradeToExecute();
	m_signed = false;
	checkGrade(m_gradeToSign);
	checkGrade(m_gradeToExecute);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
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

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << "AForm: name = " << i.getName() << ", isSigned = " << i.isSigned() << \
	", gradeToSign = " << i.getGradeToSign() << ", gradeToExecute = " << i.getGradeToExecute() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void AForm::beSigned(Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() > m_gradeToSign) {
		throw GradeTooLowException();
	}
	m_signed = true;
}

void AForm::checkGrade(int grade) {
	if (grade < MAX_GRADE) {
		throw GradeTooHighException();
	} else if (grade > MIN_GRADE) {
		throw GradeTooLowException();
	}
}

void AForm::checkBeforeExecution(int currGrade, int requestedGrade) const {
	if (!m_signed) {
		throw FormNotSignedException("Form is not signed");
	}
	if (currGrade > requestedGrade) {
		throw GradeTooLowException();
	}
}




/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string AForm::getName() const {
	return m_name;
}

bool AForm::isSigned() const {
	return m_signed;
}

int AForm::getGradeToSign() const {
	return m_gradeToSign;
}

int AForm::getGradeToExecute() const {
	return m_gradeToExecute;
}

/* ************************************************************************** */