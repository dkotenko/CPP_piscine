#include "Span.hpp"

const char* Span::SpanIsFullException::what() const throw()
{
	return ("Span is full");
}