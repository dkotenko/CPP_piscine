#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() :
	m_name("default Name"),
	m_isSigned(false),
	m_gradeToSign(MIN_GRADE),
	m_gradeToExecute(MIN_GRADE)
{

}

Form::Form(const std::string name, int grade) :
	m_name(name),
	m_isSigned(false),
	m_gradeToSign(MIN_GRADE),
	m_gradeToExecute(MIN_GRADE)
{
	
}

Form::Form( const Form & src )
{
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
		this->name = rhs.getName();
		this->isSigned = rhs.isSigned();
		this->gradeToSign = rhs.getGradeToSign();
		this->gradeToExecute = rhs.getGradeToExecute();
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


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */