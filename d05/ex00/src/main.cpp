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
		Bureaucrat bZero("Zero", 0);
		std::cout << bZero;
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
		Bureaucrat bMillion("Million", 1000000);
		std::cout << bMillion;
	}
	catch(const std::exception& e)
	{
		std::cout << "Cant create bureaucrat with invalid grade 1000000" << std::endl;
	}
}

void bureaucrat_test() {
	print_header("Bureaucrat test");

	Bureaucrat bMaxGrade("Bureaucrat MaxGrade", 1);
	std::cout << bMaxGrade;
	Bureaucrat bMinGrade("Bureaucrat MinGrade", 150);
	std::cout << bMinGrade << std::endl;

	std::cout << "Try to increment MaxGrade's grade: " << std::endl;
	try {
		bMaxGrade.incrementGrade();
	}	catch (const std::exception& e) {
		std::cout << "Cant increment bureaucrat grade with grade " << bMaxGrade.getGrade()  << std::endl;
	}

	std::cout << std::endl << "Try to decrement MinGrade's grade: " << std::endl;
	try {
		bMinGrade.decrementGrade();
	}	catch (const std::exception& e) {
		std::cout << "Cant decrement bureaucrat grade with grade " << bMinGrade.getGrade()  << std::endl;
	}
}

int main() {
	bureaucrat_test();
	invalid_grade_zero_init_test();
	invalid_grade_million_init_test();
}

