#pragma once

#include <string>

class FormNotSignedException : public std::exception {
    public:
        FormNotSignedException() throw();
        FormNotSignedException(std::string message);
        const char* what() const throw();
        ~FormNotSignedException() throw();
        
    private:
        std::string m_message;
};
