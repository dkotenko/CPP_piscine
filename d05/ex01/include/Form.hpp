#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{

	public:

		Form();
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );
		void beSigned(const Bureaucrat &bureaucrat);
		int getName();
		bool isSigned();
		int getGradeToSign();
		int getGradeToExecute();

	private:
		std::string m_name;
		bool m_signed;
		int m_gradeToSign;
		int m_gradeToExecute;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */