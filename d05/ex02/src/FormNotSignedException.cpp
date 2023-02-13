#include "FormNotSignedException.hpp"

FormNotSignedException::FormNotSignedException(std::string message) :
    m_message(message) {}

const char *FormNotSignedException::what() const throw(){
    return m_message.c_str();
}

FormNotSignedException::FormNotSignedException() throw() {}

FormNotSignedException::~FormNotSignedException() throw() {}