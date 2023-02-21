#include "ConvDouble.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvDouble::ConvDouble()
{
}

ConvDouble::ConvDouble(std::string &s)
{
	std::stringstream ss;

    ss << s;
	ss >> m_value;
}

ConvDouble::ConvDouble(char c) :
	AConvType(),
	m_value(static_cast<double>(c))
{
}

ConvDouble::ConvDouble(int n) :
	AConvType(),
	m_value(static_cast<double>(n))
{
}

ConvDouble::ConvDouble(float f) :
	AConvType(),
	m_value(static_cast<double>(f))
{
}


ConvDouble::ConvDouble( const ConvDouble & src ) :
	AConvType(src),
	m_value(src.m_value)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ConvDouble::~ConvDouble()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ConvDouble &				ConvDouble::operator=( ConvDouble const & rhs )
{
	if ( this != &rhs )
	{
		m_value = rhs.m_value;
		m_impossible = rhs.m_impossible;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ConvDouble const & i )
{
	o << "double: ";

	bool isRound = ConvDouble::areDoublesEqual(std::floor(i.m_value), std::ceil(i.m_value));
	
	if (!i.m_impossible) {
		if (isRound) {
			o << i.m_value << ".0" << std::endl;
		} else {
			o << i.m_value << std::endl;
		}
	} else {
		o << CONST_IMPOSSIBLE << std::endl;
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool ConvDouble::isDouble(std::string &str) {
	if (str == "nan" || str == "inf"  || str == "+inf" || str == "-inf") {
		return true;
	} else if (str.find('.') == std::string::npos) {
		return false;
	}

	std::string s = str.substr(0, str.length() - 1);
	std::stringstream ss;
	double num = 0;

    ss << s;
	ss >> num;
	return !(ss.good() || (num == 0 && s[0] != '0'));
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */