#include "ConvInt.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ConvInt::ConvInt(){}

ConvInt::ConvInt(std::string s) :
	m_value(0)
{

}

ConvInt::ConvInt(ConvChar &convChar) :
	m_impossible(false),
	m_value(static_cast<int>(convChar.m_value)){}

ConvInt::ConvInt(ConvFloat &convFloat) : 
	m_impossible(false)
{}

ConvInt::ConvInt(ConvDouble &convDouble){}

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