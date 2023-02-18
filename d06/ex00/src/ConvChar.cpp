#include "ConvChar.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvChar::ConvChar()
{
}

ConvChar::ConvChar( const ConvChar & src )
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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ConvChar const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool ConvChar::isChar(std::string &s) {
	return s.len() == 3 && s[0] == '\'' && s[2] == '\'';
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */