#include "InvalidFormNameException.hpp"


const char* InvalidFormNameException::InvalidFormNameException::what() const throw()
{
	return ("Invalid form name");
}