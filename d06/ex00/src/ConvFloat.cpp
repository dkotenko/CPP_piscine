#include "ConvFloat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvFloat::ConvFloat(){}

ConvFloat::ConvFloat(std::string &str) :
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
	m_value(d)
{
	if (static_cast<double>(std::numeric_limits<float>::max()) < d &&
		static_cast<double>(std::numeric_limits<float>::min()) > d
	) {
		m_impossible = true;
	} else {
		m_value = static_cast<float>(d);
	}
}

ConvFloat::ConvFloat( const ConvFloat & src ) :
	AConvType(src),
	m_value(src.m_value)
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
	if ( this != &rhs )
	{
		m_value = rhs.m_value;
		m_impossible = rhs.m_impossible;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ConvFloat const & i )
{
	o << "float: ";

	bool isRound = ConvFloat::areFloatsEqual(std::floor(i.m_value), std::ceil(i.m_value));
	
	if (!i.m_impossible) {
		if (isRound) {
			o << i.m_value << ".0f" << std::endl;
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

bool ConvFloat::isFloat(std::string &str) {
	if (str == "nanf" || str == "inff" || str == "-innf") {
		return true;
	} else if (str[str.length() - 1] != 'f' || str.find('.') == std::string::npos) {
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