#include "Converter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Converter::Converter(){}

Converter::Converter(char *literal) :
	m_literal(std::string(literal))
{
	int type = identify(m_literal);
	
	switch (type) {
		case TYPE_CHAR:
			m_char = ConvChar(m_literal);
			m_int = ConvInt(m_char);
			m_float = ConvFloat(m_char);
			m_double = ConvDouble(m_char);
			break;
		case TYPE_INT:
			m_int = ConvInt(m_literal);
			m_char = ConvChar(m_int);
			m_float = ConvFloat(m_int);
			m_double = ConvDouble(m_int);
			break;
		case TYPE_FLOAT:
			m_float = ConvFloat(m_literal);
			m_char = ConvChar(m_float);
			m_int = ConvInt(m_float);
			m_double = ConvDouble(m_float);
			break;
		case TYPE_DOUBLE:
			m_double = ConvDouble(m_literal);
			m_char = ConvChar(m_double);
			m_int = ConvInt(m_double);
			m_float = ConvFloat(m_double);
			break;
		default: //TYPE_IMPOSSIBLE
			m_double = ConvDouble(m_literal);
			m_char = ConvChar(m_literal);
			m_int = ConvInt(m_literal);
			m_float = ConvFloat(m_literal);
			break;
	}	
}

Converter::Converter( const Converter & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Converter::~Converter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Converter &				Converter::operator=( Converter const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Converter const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool Converter::stringToInt(std::string &s) {
	std::stringstream ss;
	int num = 0;

    ss << s;
	ss >> num;
	return !(ss.good() || (num == 0 && s[0] != '0'));
}

bool Converter::isInt(std::string &s) {
	std::stringstream ss;
	int num = 0;

    ss << s;
	ss >> num;
	return !(ss.good() || (num == 0 && s[0] != '0'));
}

bool Converter::isFloat(std::string &str) {
	if (str == "nanf" || str == "inff" || str == "-innf") {
		return true;
	} else if (str.back() != 'f' || str.find('.') == std::string::npos) {
		return false;
	}

	std::string s = str.substr(0, str.len() - 1);
	std::stringstream ss;
	float num = 0;

    ss << s;
	ss >> num;
	return !(ss.good() || (num == 0 && s[0] != '0'));
}

bool Converter::isDouble(std::string &str) {
	
}

int Converter::identify(std::string s) {
	if (ConvChar::isChar()) {
		return TYPE_CHAR;
	} else if (ConvInt::isInt()) {
		return TYPE_INT;
	} else if (ConvFloat::isFloat()) {
		return TYPE_FLOAT;
	} else if (ConvDouble::isDouble()) {
		return TYPE_DOUBLE;
	} else {
		return TYPE_IMPOSSIBLE;
	}
	

}

bool isCharPrintable(char c) {
	return c >= 0x20;
}

int floatToDouble(float f) {
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */