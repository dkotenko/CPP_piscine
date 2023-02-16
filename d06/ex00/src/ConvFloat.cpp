#include "ConvFloat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvFloat::ConvFloat()
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
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */