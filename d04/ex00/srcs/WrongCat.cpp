#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() 
{
	type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	type = src.type;
	sound = src.sound;
	std::cout << "WrongCat copied" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
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