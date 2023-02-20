#include "ConvChar.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvChar::ConvChar()
{
}

ConvChar::ConvChar(std::string &s) :
	AConvType(),
	m_value(s[1])
{}

ConvChar::ConvChar(int n) :
	AConvType()
{
	if (std::isalpha(static_cast<char>(n))) {
		m_value = static_cast<char>(n);
	} else {
		m_impossible = true;
	}
}

ConvChar::ConvChar(float f) :
	AConvType()
{
	if (std::isalpha(static_cast<char>(f))) {
		m_value = static_cast<char>(f);
	} else {
		m_impossible = true;
	}
}

ConvChar::ConvChar(double d) :
	AConvType()
{
	if (std::isalpha(static_cast<char>(d))) {
		m_value = static_cast<char>(d);
	} else {
		m_impossible = true;
	}
}

ConvChar::ConvChar( const ConvChar & src ) :
	AConvType(src),
	m_value(src.m_value)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ConvChar::~ConvChar()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ConvChar &				ConvChar::operator=( ConvChar const & rhs )
{
	if ( this != &rhs )
	{
		m_value = rhs.m_value;
		m_impossible = rhs.m_impossible;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ConvChar const & i )
{
	std::cout << (int)i.m_value << std::endl;
	
	if (!i.m_impossible) {
		if (ConvChar::isPrintable(i.m_value)) {
			o << i.m_value << std::endl;
		} else {
			o << NON_DISPLAYABLE << std::endl;
		}
	} else {
		o << CONST_IMPOSSIBLE << std::endl;
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool ConvChar::isChar(std::string &s) {
	std::stringstream ss;
	ss << s;
	int num = 0;
	ss >> num;
	return std::isalpha(num);
}

bool ConvChar::isPrintable(char c) {
	return c >= 0x20;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */