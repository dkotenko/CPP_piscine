#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

# define PRESIDENT_SIGN 25
# define PRESIDENT_EXECUTE 5

class PresidentialPardonForm : public AForm
{

	public:

		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;

	private:
		std::string m_target;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */