#include "GradeTooHighException.hpp"


const char* GradeTooHighException::GradeTooHighException::what() const throw()
{
	return ("Invalid grade: value must be >= 1");
}
	