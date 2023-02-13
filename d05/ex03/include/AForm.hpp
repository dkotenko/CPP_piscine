#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

# include "GradeTooHighException.hpp"
# include "GradeTooLowException.hpp"
# include  "FormNotSignedException.hpp"

class Bureaucrat;

class AForm
{
	public:
		void beSigned(Bureaucrat &bureaucrat);
		std::string getName() const;
		bool isSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		virtual void execute(Bureaucrat const & executor) const = 0;
	protected:
		AForm();
		AForm(const AForm &src );
		AForm(const std::string name, int gradeToSign, int gradeToExecute);
		~AForm();
		AForm &		operator=( AForm const & rhs );
		void checkGrade(int grade);
		void checkBeforeExecution(int currGrade, int requestedGrade) const;
		std::string m_name;
		bool m_signed;
		int m_gradeToSign;
		int m_gradeToExecute;
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ FORM_H */