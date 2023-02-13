#pragma once

#include <string>

class GradeTooHighException : public std::exception {
    public:
		virtual const char* what() const throw();
};
