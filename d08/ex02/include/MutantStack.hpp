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
		typedef typename MStack::container_type::reverse_iterator reverse_iterator;
		typedef typename MStack::container_type::const_iterator const_iterator;
		typedef typename MStack::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin();
		iterator end();
		reverse_iterator rbegin();
		reverse_iterator rend();
		const_iterator cbegin() const;
		const_iterator cend() const;
		const_reverse_iterator crbegin() const;
		const_reverse_iterator crend() const;

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

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
	return (MStack::c.rbegin());
}

template<class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
	return (MStack::c.rend());
}

template<class T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const {
	return (MStack::c.cbegin());
}

template<class T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const {
	return (MStack::c.cend());
}

template<class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const {
	return (MStack::c.crbegin());
}

template<class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const {
	return (MStack::c.crend());
}
