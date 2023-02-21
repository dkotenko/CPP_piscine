#include "ConvChar.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvChar::ConvChar()
{
}

ConvChar::ConvChar(std::string &s) :
	AConvType(),
	m_value(s[0])
{
	if (std::isdigit(s[0])) {
		m_value = s[0] - '0';
	}
}

ConvChar::ConvChar(int n) :
	AConvType()
{
	if (isPositiveChar(n)) {
		m_value = static_cast<char>(n);
	} else {
		m_impossible = true;
	}
}

ConvChar::ConvChar(float f) :
	AConvType()
{
	if (isRoundFloat(f) && isPositiveChar(static_cast<int>(f))) {
		m_value = static_cast<char>(f);
	} else {
		m_impossible = true;
	}
}

ConvChar::ConvChar(double d) :
	AConvType()
{
	if (isRoundDouble(d) && isPositiveChar(static_cast<int>(d))) {
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
	o << "char: ";
	if (!i.m_impossible) {
		if (ConvChar::isPrintable(i.m_value)) {
			o << "'" << i.m_value << "'" << std::endl;
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


bool ConvChar::isPositiveChar(int n) {
	return n >= 0 && n <= 0x7f;
}

bool ConvChar::isChar(std::string &s) {
	return s.length() == 1 && ConvChar::isPositiveChar(s[0]);
}

bool ConvChar::isPrintable(char c) {
	return c >= 0x20;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */