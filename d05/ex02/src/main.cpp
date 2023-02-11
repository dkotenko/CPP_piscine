#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "assert.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

void shrubbery_success() {
    print_header("test shrubberyForm");
	ShrubberyCreationForm shForm("test");
    Bureaucrat b1("Bureacrat", 1);
    shForm.execute(b1);
	
}

void robotomy_success() {
    print_header("test robotomyForm");
    RobotomyRequestForm rbForm("test");
    Bureaucrat b1("Bureacrat", 1);
    rbForm.execute(b1);
}

int main() {
    robotomy_success();
}


