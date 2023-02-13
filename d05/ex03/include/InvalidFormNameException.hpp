#pragma once

#include <string>

class InvalidFormNameException : public std::exception {
    public:
		virtual const char* what() const throw();
};