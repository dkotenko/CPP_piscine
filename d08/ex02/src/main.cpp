#include "MutantStack.hpp"

#include <list>
#include <iostream>

void test(std::string s, void (*test)(void)) {
    std::cout << "==============================\n";
    std::cout << s << std::endl;
    std::cout << "==============================\n";
	test();
	std::cout << "All testcases passed successfully\n";
	std::cout << "******************************\n";
}

void test_subjectTest()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;  
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void test_compare(void)
{
	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << list.back() << std::endl;

	list.pop_back();

	std::cout << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);

	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void test_reverseIter() {
	MutantStack<std::string> mstack;
		
	std::cout << "is empty " << mstack.empty() << std::endl;
	std::string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven"};
	for (size_t i = 0; i < sizeof(str) / sizeof(std::string); i++)
		mstack.push(str[i]);
	std::cout << "is empty " << mstack.empty() << std::endl;
	MutantStack<std::string>::reverse_iterator rit;
	for (rit = mstack.rbegin(); rit != mstack.rend(); rit++)
		std::cout << *rit << std::endl;
	std::cout << std::endl;

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.top() << std::endl;

	rit--;
	std::cout << *rit << std::endl;
}

void test_constReverseIter() {
	MutantStack<float> mstack;
	for (int i = 0; i < 10; i++) {
		mstack.push((static_cast<float>(rand() % 100 + 1) / 2.1f));
	}
	mstack.push(42.4242);
	mstack.push(21.2121);
	std::cout << "const_iterator" << std::endl;
	MutantStack<float>::const_iterator cit = mstack.cend() - 2;
	std::cout << *cit << std::endl;
	cit++;
	std::cout << *cit << std::endl;
	std::cout << std::endl;
	for (cit = mstack.cbegin(); cit != mstack.cend(); cit++) {
		std::cout << *cit << std::endl;
	}
	std::cout << std::endl;

	std::cout << "const_reverse_iterator" << std::endl;
	const MutantStack<float> const_mstack(mstack);
	MutantStack<float>::const_reverse_iterator crit;
	for (crit = const_mstack.crbegin(); crit != const_mstack.crend(); crit++)
		std::cout << *crit << std::endl;
}

void test_all() {
	MutantStack<char> mstack;
	std::deque<char> deque;
	for (int i = 0; i < 10; i++)
	{
		char ch = 'a' + rand() % 26;
		mstack.push(ch);
		deque.push_front(ch);
	}
	MutantStack<char>::iterator mit;
	for (mit = mstack.begin(); mit != mstack.end(); mit++)
		std::cout << "[" << *mit << "] ";
	std::cout << std::endl;
	std::deque<char>::iterator dit;
	for (dit = mstack.begin(); dit != mstack.end(); dit++)
		std::cout << "[" << *dit << "] ";
	std::cout << std::endl;

	std::cout << "temp:";
	MutantStack<char> temp;
	temp.push('a' + rand() % 26);
	temp.push('a' + rand() % 26);
	temp.push('a' + rand() % 26);
	MutantStack<char>::iterator it;
	for (it = temp.begin(); it != temp.end(); it++) {
		std::cout << "[" << *it << "] ";
	}
	std::cout << '\n' << std::endl;

	std::cout << "mstack.size: " << mstack.size() << std::endl;
	std::cout << "temp.size: " << temp.size() << std::endl;

	std::cout << "\ntemp.swap(mstack)" << std::endl;
	temp.swap(mstack);
	std::cout << "mstack.size: " << mstack.size() << std::endl;
	for (mit = mstack.begin(); mit != mstack.end(); mit++) {
		std::cout << "[" << *mit << "] ";
	}
		
	std::cout << '\n' << std::endl;
	std::cout << "temp.size: " << temp.size() << std::endl;
	for (it = temp.begin(); it != temp.end(); it++) {
		std::cout << "[" << *it << "] ";
	}
	std::cout << std::endl;
}

int main(void)
{
	test("subjectTest", &test_subjectTest);
	test("compare", &test_compare);
	test("reverseIter", &test_reverseIter);
	test("constReverseIter", &test_constReverseIter);
	test("all", &test_all);
}