#include "ConvFloat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvFloat::ConvFloat(){}

ConvFloat::ConvFloat(std::string &s) :
	AConvType(),
	m_value(0.f)
{
	std::string s = str.substr(0, str.length() - 1);
	std::stringstream ss;

    ss << s;
	ss >> m_value;
}

ConvFloat::ConvFloat(char c) :
	AConvType(),
	m_value(static_cast<float>(c)){}

ConvFloat::ConvFloat(int n) :
	AConvType(),
	m_value(static_cast<float>(n)){}

ConvFloat::ConvFloat(double d) :
	AConvType(),
	m_value(0.f)
{

}

ConvFloat::ConvFloat( const ConvFloat & src )
{

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ConvFloat::~ConvFloat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ConvFloat &				ConvFloat::operator=( ConvFloat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ConvFloat const & i )
{
	o << "float: ";
	
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

bool ConvFloat::isFloat(std::string &str) {
	if (str == "nanf" || str == "inff" || str == "-innf") {
		return true;
	} else if (str.back() != 'f' || str.find('.') == std::string::npos) {
		return false;
	}

	std::string s = str.substr(0, str.length() - 1);
	std::stringstream ss;
	float num = 0;

    ss << s;
	ss >> num;
	return !(ss.good() || (num == 0 && s[0] != '0'));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */