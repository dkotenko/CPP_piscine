#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/



PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	AForm("PresidentialPardonForm", PRESIDENT_SIGN, PRESIDENT_EXECUTE),
	m_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) :
	AForm(src)
{
	m_target = src.getTarget();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		m_name = rhs.getName();
		m_signed = rhs.isSigned();
		m_gradeToSign = rhs.getGradeToSign();
		m_gradeToExecute = rhs.getGradeToExecute();
		m_target = rhs.getTarget();
		checkGrade(m_gradeToSign);
		checkGrade(m_gradeToExecute);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << "PresidentialPardonForm: name = " << i.getName() << ", isSigned = " << i.isSigned() << \
	", gradeToSign = " << i.getGradeToSign() << ", gradeToExecute = " << i.getGradeToExecute() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const &executor) {
	
    std::cout << executor.getName() << " informs: "  << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string PresidentialPardonForm::getTarget() const {
	return m_target;
}

/* ************************************************************************** */