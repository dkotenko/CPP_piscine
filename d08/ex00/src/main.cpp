#include "easyfind.hpp"
#include <vector>
#include <list>

void test(std::string s, void (*test)(void)) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
	test();
	std::cout << "All testcases passed successfully\n";
	std::cout << "******************************\n";
}

void test_valid() {
	std::vector<int> vector;
	std::list<int> list;
	

	for (int i = 0; i < 10; i++) {
		vector.push_back(i);
		list.push_back(i);
	}

	std::cout << "Searching 2 in vector:" << std::endl;
	try
	{
		std::cout << "Found: " << *easyfind(vector, 2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Searching 2 in list" << std::endl;
	try
	{
		
		std::cout << "Found: " << *easyfind(list, 2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}

void test_not_found() {

	std::vector<int> vector;
	std::list<int> list;
	

	for (int i = 0; i < 10; i++) {
		vector.push_back(i);
		list.push_back(i);
	}
	int toFind = 30;

	std::cout << "Searching " << toFind << " in vector:" << std::endl;
	try
	{
		std::cout << "Found: " << *easyfind(vector, toFind) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Searching " << toFind << " in list:" << std::endl;
	try
	{
		
		std::cout << "Found: " << *easyfind(list, toFind) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


}

int main() {
	test("test valid", &test_valid);
	test("test not found", &test_not_found);
}