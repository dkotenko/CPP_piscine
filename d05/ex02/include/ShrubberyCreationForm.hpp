#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"

#define SHRUBBERY_SIGN 145
#define SHRUBBERY_EXECUTE 137

class ShrubberyCreationForm : public AForm
{

	public:

		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		void execute(Bureaucrat const & executor);
		std::string getTarget() const;
	private:
		std::string m_target;

};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */