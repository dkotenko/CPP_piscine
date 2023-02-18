#include "ConvDouble.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvDouble::ConvDouble()
{
}

ConvDouble::ConvDouble( const ConvDouble & src )
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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ConvDouble const & i )
{
	o << "double: ";
	
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

bool Converter::isDouble(std::string &str) {
	return 0;
}

bool ConvDouble::isDouble(std::string &str) {
	if (str == "nan" || str == "inf" || str == "-inn") {
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