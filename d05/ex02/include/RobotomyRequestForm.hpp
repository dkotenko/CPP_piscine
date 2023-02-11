#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"

# define ROBOTOMY_SIGN 72
# define ROBOTOMY_EXECUTE 45 

class RobotomyRequestForm : public AForm
{

	public:

		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		void execute(Bureaucrat const & executor);
		std::string getTarget() const;
	private:
		std::string m_target;

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */