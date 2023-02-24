#include <Span.hpp>

Span::Span() :
	m_capacity(0),
	m_size(0) {};

Span::Span(unsigned int size) :
	m_capacity(size),
	m_size(0) {};

Span::Span(const Span &src) :
	m_capacity(src.m_capacity),
	m_size(src.m_size),
	m_span(src.m_span) {};

Span &Span::operator=(const Span &span);