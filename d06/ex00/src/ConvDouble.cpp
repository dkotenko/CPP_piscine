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