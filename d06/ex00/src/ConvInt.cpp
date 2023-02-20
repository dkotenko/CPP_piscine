#include "ConvInt.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvInt::ConvInt(){}

ConvInt::ConvInt(std::string &s) :
	AConvType(),
	m_value(0)
{
	if (ConvInt::isInt(s)) {
		std::stringstream ss;

    	ss << s;
		ss >> m_value;
	} else {
		m_impossible = true;
	}
}

ConvInt::ConvInt(char c) :
	AConvType(),
	m_value(static_cast<int>(c)){}

ConvInt::ConvInt(float f) : 
	AConvType(),
	m_value(0)
{
	m_value = static_cast<int>(f);
	if (!areFloatsEqual(static_cast<float>(m_value), f)) {
		m_impossible = true;
	}
}

ConvInt::ConvInt(double d) : 
	AConvType(),
	m_value(0)
{
	m_value = static_cast<int>(d);
	if (!areDoublesEqual(static_cast<double>(m_value), d)) {
		m_impossible = true;
	}
}

ConvInt::ConvInt( const ConvInt & src ) :
	AConvType(src),
	m_value(src.m_value){}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ConvInt::~ConvInt()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ConvInt &				ConvInt::operator=( ConvInt const & rhs )
{
	if ( this != &rhs )
	{
		m_value = rhs.m_value;
		m_impossible = rhs.m_impossible;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ConvInt const & i )
{
	o << "int: ";
	
	if (!i.m_impossible) {
		o << i.m_value << std::endl;
	} else {
		o << CONST_IMPOSSIBLE << std::endl;
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/



bool ConvInt::isInt(std::string &s) {
	std::istringstream iss(s);
	int num = 0;

	iss >> num;
	std::stringstream reverse;
	reverse << num;
	return s == reverse.str();

	if (num == CONV_INT_MAX) {
		std::stringstream ssIntMax;
		ssIntMax << CONV_INT_MAX;
		return ssIntMax.str() == s;
	} else if (num == CONV_INT_MIN) {
		std::stringstream ssIntMin;
		ssIntMin << CONV_INT_MIN;
		return ssIntMin.str() == s;
	} else if (num == 0) {
		std::stringstream ssIntZero;
		ssIntZero << 0;
		return ssIntZero.str() == s;
	}
	return num;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */