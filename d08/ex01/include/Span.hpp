#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <exception>
#include <limits>


class Span {
	class SpanIsFullException : public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class NoSpanException : public std::exception {
		public:
			virtual const char *what() const throw();
	};

	public:
		Span();
		Span(unsigned int size);
		Span(const Span &src);
		Span &operator=(const Span &span);
		~Span();

		void addNumber(const int &n);
		void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);

		int shortestSpan(void);
		int longestSpan(void);

		size_t size(void) const;

		std::vector<int> getSpan(void) const;

		
		std::vector<int> m_span;
		unsigned int m_capacity;
		unsigned int m_size;
	private:
}


