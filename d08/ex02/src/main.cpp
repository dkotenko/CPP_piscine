#include "MutantStack.hpp"

#include <list>
#include <iostream>

void subjectTest()
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

void compare(void)
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

int main(void)
{
	srand(time(NULL));
	std::cout << "-----------------" << std::endl;
	std::cout << "-----Subject-----" << std::endl;
	std::cout << "-----------------" << std::endl;
	subjectTest();
	std::cout << std::endl;
	
	std::cout << "-----------------" << std::endl;
	std::cout << "-----Compare-----" << std::endl;
	std::cout << "-----------------" << std::endl;
	compare();
	std::cout << std::endl;

	{
		std::cout << "----------------" << std::endl;
		std::cout << "-----String-----" << std::endl;
		std::cout << "----------------" << std::endl;
		MutantStack<std::string> mstack;
		
		std::cout << "is empty " << mstack.empty() << std::endl;
		std::string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven"};
		for (size_t i = 0; i < sizeof(str) / sizeof(std::string); i++)
			mstack.push(str[i]);
		std::cout << "is empty " << mstack.empty() << std::endl;
		std::cout << std::endl;

		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.top() << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "---------------" << std::endl;
		std::cout << "-----float-----" << std::endl;
		std::cout << "---------------" << std::endl;
		MutantStack<float> mstack;

		for (int i = 0; i < 10; i++)
			mstack.push((static_cast<float>(rand() % 100 + 1) / 2.1f));
		mstack.push(42.4242);
		mstack.push(21.2121);
	}
	std::cout << std::endl;
	{
		std::cout << "--------------" << std::endl;
		std::cout << "-----char-----" << std::endl;
		std::cout << "--------------" << std::endl;
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
		for (it = temp.begin(); it != temp.end(); it++)
			std::cout << "[" << *it << "] ";
		std::cout << '\n' << std::endl;

		std::cout << "mstack.size: " << mstack.size() << std::endl;
		std::cout << "temp.size: " << temp.size() << std::endl;

		std::cout << "\ntemp.swap(mstack)" << std::endl;
		temp.swap(mstack);
		std::cout << "mstack.size: " << mstack.size() << std::endl;
		for (mit = mstack.begin(); mit != mstack.end(); mit++)
			std::cout << "[" << *mit << "] ";
		std::cout << '\n' << std::endl;
		std::cout << "temp.size: " << temp.size() << std::endl;
		for (it = temp.begin(); it != temp.end(); it++)
			std::cout << "[" << *it << "] ";
		std::cout << std::endl;
	}
}