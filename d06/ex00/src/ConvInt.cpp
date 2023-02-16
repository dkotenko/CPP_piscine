#include "ConvInt.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvInt::ConvInt()
{
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