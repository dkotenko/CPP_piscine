#include <Span.hpp>

Span::Span() :
	m_size(0) {};

Span::Span(unsigned int size) :
	m_size(size) {};

Span::Span(const Span &src) :
	m_span(src.m_span),
	m_size(src.m_size) {};

Span &Span::operator=(const Span &rhs) {
	m_size = rhs.m_size;
	m_span = rhs.m_span;
	return *this;
}

Span::~Span() {};

size_t Span::size(void) const
{
	return (m_size);
}

void Span::addNumber(const int &n) {
	if (m_span.size() + 1 > m_size) {
		throw(SpanIsFullException());
	}
	m_span.push_back(n);
}

void Span::addNumber(std::vector<int> toAdd)
{
	if (toAdd.size() + m_span.size() <= m_size) {
		m_span.insert(m_span.end(), toAdd.begin(), toAdd.end());
	} else {
		int shift = toAdd.size() - (m_size - m_span.size());
		std::vector<int>::iterator it = toAdd.begin();
		std::advance(it, shift);
		m_span.insert(m_span.end(), it, toAdd.end());
	}
}

int Span::longestSpan() {
	if (m_size <= 1)
		throw(NoSpanException());
	std::vector<int>::iterator max = std::max_element(m_span.begin(), m_span.end());
	std::vector<int>::iterator min = std::min_element(m_span.begin(), m_span.end());
	return (*max - *min);
}

int Span::shortestSpan(void)
{
	if (m_size <= 1)
		throw(NoSpanException());
	std::vector<int>::iterator left;
	std::vector<int>::iterator right;

	int shortest = std::numeric_limits<int>::max();
	std::vector<int> v = m_span;
	std::sort(v.begin(), v.end());
	for (left = v.begin(); left != v.end() - 1; left++)
	{
		right = left + 1;
		int candidate = std::abs(*right - *left); 
		if (candidate < shortest) {
			shortest = candidate;
		}
	}
	return (shortest);
}