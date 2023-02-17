#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "assert.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

void internCreateForm_success() {
    print_header("test internCreateForm_success");

    Intern intern;

    AForm *shrubberyForm = intern.makeForm(FORM_SHRUBBERY, "test");
    AForm *presidentialForm = intern.makeForm(FORM_PRESIDENTIAL, "test");
    AForm *robotomyForm = intern.makeForm(FORM_ROBOTOMY, "test");

    Bureaucrat bureacrat("Bureacrat", 1);
    bureacrat.signForm(*shrubberyForm);
    bureacrat.executeForm(*shrubberyForm);

    bureacrat.signForm(*presidentialForm);
    bureacrat.executeForm(*presidentialForm);

    bureacrat.signForm(*robotomyForm);
    bureacrat.executeForm(*robotomyForm);
    delete shrubberyForm;
    delete presidentialForm;
    delete robotomyForm;
}

void internCreateForm_invalidFormName() {
    print_header("test internCreateForm_invalidFormName");

    Intern intern;
    
    AForm *shrubberyForm = intern.makeForm("Invalid name", "test");
    (void)shrubberyForm;
    shrubberyForm->getName();
    delete shrubberyForm;
}

int main() {
    internCreateForm_success();
    internCreateForm_invalidFormName();
}


