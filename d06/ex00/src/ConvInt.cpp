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

ConvInt::ConvInt( const ConvInt & src )
{

}


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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
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
	std::stringstream ss;
	int num = 0;

    ss << s;
	ss >> num;
	return !(ss.good() || (num == 0 && s[0] != '0'));
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */