#include "Bureaucrat.hpp"

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

void invalid_grade_zero_init_test() {
	std::cout << "Try to create a bureaucrat with invalid grade 0:" << std::endl;
	try
	{
		Bureaucrat Zero("Zero", 0);
		std::cout << Zero;
	}
	catch(const std::exception& e)
	{
		std::cout << "Cant create bureaucrat with invalid grade 0" << std::endl;
	}
}

void invalid_grade_million_init_test() {
	std::cout << "Try to create a bureaucrat with invalid grade 100000:" << std::endl;
	try
	{
		Bureaucrat Million("Million", 1000000);
		std::cout << Million;
	}
	catch(const std::exception& e)
	{
		std::cout << "Cant create bureaucrat with invalid grade 1000000" << std::endl;
	}
}

void bureaucrat_test() {
	print_header("Bureaucrat test");

	Bureaucrat Sam("Manager Sam", 21);
	std::cout << Sam;
	Bureaucrat Tim("Manager Tim", 42);
	std::cout << Tim;
	Bureaucrat Robert("Boss Robert", 1);
	std::cout << Robert;
	Bureaucrat Emily("Clerk Emily", 150);
	std::cout << Emily << std::endl;

	std::cout << "Try to increment Boss's grade: " << std::endl;
	try {
		Robert.incrementGrade();
	}	catch (const std::exception& e) {
		std::cout << "Cant increment bureaucrat grade with grade " << Robert.getGrade()  << std::endl;
	}

	std::cout << std::endl << "Try to decrement Clerk's grade: " << std::endl;
	try {
		Emily.decrementGrade();
	}	catch (const std::exception& e) {
		std::cout << "Cant decrement bureaucrat grade with grade " << Emily.getGrade()  << std::endl;
	}
}

int main() {
	bureaucrat_test();
	invalid_grade_zero_init_test();
	invalid_grade_million_init_test();
}

