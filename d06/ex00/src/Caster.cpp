#include "Caster.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Caster::Caster(char *literal) :
	m_literal(std::string(literal))
{
	
}

Caster::Caster( const Caster & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Caster::~Caster()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Caster &				Caster::operator=( Caster const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Caster const & i )
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