#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data() :
m_char('A'),
m_integer(2),
m_float(55.0f),
m_double(123.3)
{
}

Data::Data( const Data & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &				Data::operator=( Data const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Data const & i )
{
	o << "Data: char = " << i.m_char << ", int = " << i.m_integer << ", float = " \
	<< i.m_float << ", double = " << i.m_double << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

uintptr_t Data::serialize(Data* ptr) {
	return reinterpret_cast<std::uintptr_t>(ptr);
}

Data* Data::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */