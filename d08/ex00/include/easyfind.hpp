#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>

class ItemNotFoundException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Item not found");
		};
};

template <typename T>
typename T::iterator easyfind(T &c, int n)
{
	typename T::iterator iterator;

	iterator = std::find(c.begin(), c.end(), n);
	if (iterator == c.end())
		throw(ItemNotFoundException());
	return iterator;
}
