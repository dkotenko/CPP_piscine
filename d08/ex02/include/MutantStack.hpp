#pragma once

#include <iostream>
#include <stack>
#include <iterator>
#include <deque>

template<class T>
class MutantStack : public std::stack<T> {

	public:
		typedef typename std::stack<T> MStack;

		MutantStack(){};
		MutantStack(const MutantStack &copyMutantStack) : MStack(copyMutantStack){};
		MutantStack &operator=(const MutantStack &mutantStack)
		{
			if (this != &mutantStack)
				return *this;
			MStack::operator=(mutantStack);
			return *this;
		};
		~MutantStack(){};

		typedef typename MStack::container_type::iterator iterator;

		iterator begin();
		iterator end();

	private:
};

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (MStack::c.begin());
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return (MStack::c.end());
}
