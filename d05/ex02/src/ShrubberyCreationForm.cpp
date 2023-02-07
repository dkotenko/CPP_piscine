#include "ShrubberyCreationForm.hpp"

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

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("ShrubberyCreationForm", SHRUBBERY_SIGN, SHRUBBERY_EXECUTE) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

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
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string trees[] = {
		"            ,@@@@@@@,\n",
		"    ,,,.   ,@@@@@@/@@,  .oo8888o.\n",
		"  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n",
		",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n",
		"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n",
		"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n",
		"`&%\\ ` /%&'    |.|        \\ '|8'\n",
		"    |o|        | |         | |\n",
		"    |.|        | |         | |\n",
		" _\\/ ._\\//__/_/  ,\\_//___\\/.  \\_//__/_\n"};

	std::ofstream outfile;
	outfile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
	std::string outfileName = getTarget() + "_shrubbery";
	size_t len = sizeof(trees) / sizeof(std::string);
	try
	{
		outfile.open(outfileName, std::ios::out);
		for (std::string *it = &trees[0]; it != &trees[len]; ++it)
			outfile << *it;
	}
	catch(std::ofstream::failure &e)
	{
		std::cerr << "Error openning file" << '\n';
		return ;
	}
	std::cout << GREEN << "Shrubs planted in the " << getTarget() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */