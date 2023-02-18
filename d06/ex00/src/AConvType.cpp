#include "AConvType.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AConvType::AConvType() :
m_impossible(false)
{
}

AConvType::AConvType( const AConvType & src )
{
	m_impossible = src.m_impossible;
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
	if ( this != &rhs )
	{
		m_impossible = rhs.m_impossible;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AConvType const & i )
{
	o << "isImpossible = " << i.m_impossible;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

bool AConvType::areFloatsEqual(float f1, float f2) {
	return std::fabs(f1 -f2) < FLT_EPSILON;
}

bool AConvType::areDoublesEqual(double f1, double f2) {
	return std::abs(f1 -f2) < DBL_EPSILON;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */