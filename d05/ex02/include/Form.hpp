#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const Form &src );
		Form(const std::string name, int gradeToSign, int gradeToExecute);
		~Form();

		Form &		operator=( Form const & rhs );
		void beSigned(Bureaucrat &bureaucrat);
		std::string getName() const;
		bool isSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

	private:
		std::string m_name;
		bool m_signed;
		int m_gradeToSign;
		int m_gradeToExecute;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */