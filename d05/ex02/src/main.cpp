#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "assert.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

void shrubbery_success() {
    print_header("test shrubberyForm");
	ShrubberyCreationForm shForm("test");
    Bureaucrat b1("Bureacrat", 1);
    b1.signForm(shForm);
    b1.executeForm(shForm);
}

void robotomy_success() {
    print_header("test robotomyForm");
    RobotomyRequestForm rbForm("test");
    Bureaucrat b1("Bureacrat", 1);
    b1.signForm(rbForm);
    b1.executeForm(rbForm);
}

void presidental_success() {
    print_header("test presidentalForm");
    PresidentialPardonForm prForm("test");
    Bureaucrat b1("Bureacrat", 1);
    b1.signForm(prForm);
    b1.executeForm(prForm);
}

void checkBeforeExecution_notSigned() {
    print_header("test checkBeforeExecution_notSigned");
    PresidentialPardonForm prForm("test");
    Bureaucrat b1("Bureacrat", 1);
    b1.executeForm(prForm);
}

void checkBeforeExecution_gradeTooLow() {
    print_header("test checkBeforeExecution_gradeTooLow");
    PresidentialPardonForm prForm("test");
    Bureaucrat signer("Signer", 1);
    Bureaucrat executor("Executor", MIN_GRADE);
    signer.signForm(prForm);
    executor.executeForm(prForm);
}

int main() {
    
    shrubbery_success();
    robotomy_success();
    presidental_success();
    checkBeforeExecution_notSigned();
    checkBeforeExecution_gradeTooLow();
    
}


