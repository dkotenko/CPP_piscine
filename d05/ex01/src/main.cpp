#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "assert.hpp"

void print_header(std::string s) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
}

void createForm_valid() {
	print_header("createForm_valid");

	Form enterForm("Form", 100, 40);
	std::cout << enterForm << std::endl;
}

void createForm_invalidGradeToSign() {
	print_header("createForm_invalidGradeToSign");

	std::cout << "Try to create a Form with gradeToSign = 0: " << std::endl;
	try {
		Form zeroGradeToSignForm("zeroGradeToSignForm", 0, 10);
	}	catch (const std::exception& e) {
		std::cout << "can't create a Form with gradeToSign = 0" << std::endl;
	}

	std::cout << "Try to create a Form with gradeToSign = " << MIN_GRADE + 1 << std::endl;
	try {
		Form minGradeToSignForm("minGradeToSignForm", MIN_GRADE + 1, 10);
	}	catch (const std::exception& e) {
		std::cout << "can't create a Form with gradeToSign = " << MIN_GRADE + 1  << std::endl;
	}
}

void createForm_invalidGradeToExecute() {
	print_header("createForm_invalidGradeToExecute");
	std::cout << "Try to create a Form with gradeToExecute = " << 1000 << std::endl;
	try {
		Form zeroGradeToExecuteForm("zeroGradeToExecuteForm", 10, 1000);
	}	catch (const std::exception& e) {
		std::cout << "can't create a Form with gradeToExecute = " << 1000  << std::endl;
	}

	std::cout << "Try to create a Form with gradeToSign = " << MIN_GRADE + 1 << std::endl;
	try {
		Form minGradeToExecuteForm("minGradeToExecuteForm", 1, MIN_GRADE + 1);
	}	catch (const std::exception& e) {
		std::cout << "can't create a Form with gradeToExecute = " << MIN_GRADE + 1 << std::endl;
	}
}

void beSigned_invalidGradeToSign() {
	print_header("beSigned_invalidGradeToSign");

	Bureaucrat b("test", 110);
	std::cout << b << std::endl;

	Form enterForm("Form", 100, 40);
	std::cout << enterForm << std::endl;

	std::cout << "Try to beSigned a " << enterForm.getName() << " with gradeToSign = " << enterForm.getGradeToSign() << std::endl;
	try {
		enterForm.beSigned(b);
	}	catch (const std::exception& e) {
		std::cout << "can't beSigned a Form  " << enterForm.getName() << std::endl;
	}
}

void beSigned_invalidGradeToExecute() {
	print_header("beSigned_invalidGradeToExecute");

	Bureaucrat b("test", 110);
	std::cout << b << std::endl;

	Form enterForm("Form", 100, 40);
	std::cout << enterForm << std::endl;

	std::cout << "Try to execute a " << enterForm.getName() << " with gradeToSign = " << enterForm.getGradeToSign() << std::endl;
	try {
		enterForm.beSigned(b);
	}	catch (const std::exception& e) {
		std::cout << "can't invoke beSigned in a Form  " << enterForm.getName() << std::endl;
	}
}

void signForm_test() {
	print_header("sign form test");
	Bureaucrat bureaucratCanSign("Bureacrat1", MAX_GRADE);
	Bureaucrat bureaucratCanNotSign("Bureacrat2", MIN_GRADE);

	Form form1("Form1", 2, 2);
	Form form2("Form1", 2, 2);


	bureaucratCanSign.signForm(form1);
	std::cout << "Sign the form one more time:" << std::endl;
	bureaucratCanSign.signForm(form1);
	std::cout << "Can't sign the form:" << std::endl;
	bureaucratCanNotSign.signForm(form2);
}

int main() {
	print_header("sign form test");
	createForm_valid();
	createForm_invalidGradeToSign();
	createForm_invalidGradeToExecute();
	beSigned_invalidGradeToSign();
	beSigned_invalidGradeToExecute();
	signForm_test();
}


