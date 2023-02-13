#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	AForm("ShrubberyCreationForm", SHRUBBERY_SIGN, SHRUBBERY_EXECUTE),
	m_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) :
	AForm(src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << "Form: name = " << i.getName() << ", isSigned = " << i.isSigned() << \
	", gradeToSign = " << i.getGradeToSign() << ", gradeToExecute = " << i.getGradeToExecute() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	std::string trees[] = {
		"    *    \n",
		"   ***   \n",
		"  *****  \n",
		" ******* \n",
		"*********\n",
		"    #    \n",
	};

	std::ofstream outfile;
	outfile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
	std::string outfileName = getTarget() + "_shrubbery";
	size_t len = sizeof(trees) / sizeof(std::string);
	try
	{
		outfile.open(outfileName.c_str(), std::ios::out);
		for (std::string *it = &trees[0]; it != &trees[len]; ++it)
			outfile << *it;
	}
	catch(std::ofstream::failure &e)
	{
		std::cerr << "Error openning file" << '\n';
		return ;
	}
	std::cout << "Shrubs planted in the " << getTarget() << " by " << executor.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ShrubberyCreationForm::getTarget() const {
	return m_target;
}

/* ************************************************************************** */