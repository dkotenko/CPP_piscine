#include "Bureaucrat.hpp"

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

int main() {
	Bureaucrat b;

	std::cout << b.getName() << std::endl;

	try {
		b.decrementGrade();
	} catch (Bureaucrat::GradeTooLowException e) {
		std::cout << "Can't decrement grade" << std::endl;
	}
}

void bureaucrat_copy_test() {
	Bureaucrat b;

	Bureaucrat a(b);
}

void bureaucrat_assign_test() {
	Bureaucrat b;

	Bureaucrat a = b;
}