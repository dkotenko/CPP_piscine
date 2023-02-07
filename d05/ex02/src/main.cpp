#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "assert.hpp"
#include "ShrubberyCreationForm.hpp"

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

int main() {
	print_header("test");
	ShrubberyCreationForm shForm;
	std::cout << shForm;
}


