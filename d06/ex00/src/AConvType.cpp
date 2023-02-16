#include "AConvType.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AConvType::AConvType()
{
}

AConvType::AConvType( const AConvType & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AConvType::~AConvType()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AConvType &				AConvType::operator=( AConvType const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AConvType const & i )
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