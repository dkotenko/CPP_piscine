#include "GradeTooLowException.hpp"


const char* GradeTooLowException::GradeTooLowException::what() const throw()
{
	return ("Too low grade to process the form");
}