#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	AForm("RobotomyCreationForm", ROBOTOMY_SIGN, ROBOTOMY_EXECUTE),
	m_target(target)
{
	std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : 
	AForm(src)
{
	m_target = src.getTarget();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "RobotomyRequestForm: name = " << i.getName() << ", isSigned = " << i.isSigned() << \
	", gradeToSign = " << i.getGradeToSign() << ", gradeToExecute = " << i.getGradeToExecute() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const &executor) {
	
    bool robotomySuccess = (bool)(std::rand() % 2);

	if (robotomySuccess) {
		std::cout << getTarget() << " has been robotomized successfully by " << executor.getName() << std::endl;
	} else {
		std::cout << "The robotomy on the target " << getTarget() << " failed by " << executor.getName() << std::endl;
	}
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string RobotomyRequestForm::getTarget() const {
	return m_target;
}

/* ************************************************************************** */