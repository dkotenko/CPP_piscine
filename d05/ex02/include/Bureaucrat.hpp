#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"
# include "AForm.hpp"

# define MAX_GRADE 1
# define MIN_GRADE 150

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		int getGrade() const;
		const std::string getName() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &form);

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		const Bureaucrat &		operator=( Bureaucrat const & rhs ) const;

	private:
		const std::string name;
		int grade;

	
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */