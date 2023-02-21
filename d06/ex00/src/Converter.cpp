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
			m_int = ConvInt(m_char.m_value);
			m_float = ConvFloat(m_char.m_value);
			m_double = ConvDouble(m_char.m_value);
			break;
		case TYPE_INT:
			m_int = ConvInt(m_literal);
			m_char = ConvChar(m_int.m_value);
			m_float = ConvFloat(m_int.m_value);
			m_double = ConvDouble(m_int.m_value);
			break;
		case TYPE_FLOAT:
			m_float = ConvFloat(m_literal);
			m_char = ConvChar(m_float.m_value);
			m_int = ConvInt(m_float.m_value);
			m_double = ConvDouble(m_float.m_value);
			break;
		case TYPE_DOUBLE:
			m_double = ConvDouble(m_literal);
			m_char = ConvChar(m_double.m_value);
			m_int = ConvInt(m_double.m_value);
			m_float = ConvFloat(m_double.m_value);
			break;
		default: //TYPE_IMPOSSIBLE
			m_double.m_impossible = true;
			m_char.m_impossible = true;
			m_int.m_impossible = true;
			m_float.m_impossible = true;
			break;
	}	
}

Converter::Converter( const Converter & src )
{
	m_char = src.m_char;
	m_int = src.m_int;
	m_float = src.m_float;
	m_double = src.m_double;
	m_literal = src.m_literal;
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
	if ( this != &rhs ) {
		*this = rhs;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Converter const & i )
{
	o <<  i.m_char << i.m_int << i.m_float << i.m_double;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Converter::identify(std::string &s) {
	if (ConvChar::isChar(s)) {
		return TYPE_CHAR;
	} else if (ConvInt::isInt(s)) {
		return TYPE_INT;
	} else if (ConvFloat::isFloat(s)) {
		return TYPE_FLOAT;
	} else if (ConvDouble::isDouble(s)) {
		return TYPE_DOUBLE;
	} else {
		return TYPE_IMPOSSIBLE;
	}
	

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */