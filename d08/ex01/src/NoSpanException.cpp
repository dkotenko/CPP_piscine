#include "Span.hpp"

const char* Span::NoSpanException::what() const throw()
{
	return ("Couldn't get span, only one element in array");
}