#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() 
{
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	type = src.type;
	sound = src.sound;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & src )
{
	if ( this != &src )
	{
		this->type = src.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & out, WrongCat const & i )
{
	out << "WrongCat, type = " << i.getType() << std::endl;
	return out;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */