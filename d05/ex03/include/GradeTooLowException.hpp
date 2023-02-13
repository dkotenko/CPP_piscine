#pragma once

#include <string>

class GradeTooLowException : public std::exception {
    public:
		virtual const char* what() const throw();
};