#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat constructed" << std::endl;
}

Cat::Cat( const Cat & src )
{
	type = src.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & src )
{
	if ( this != &src )
	{
		this->type = src.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & out, const Cat & i )
{
	out << "Cat, type = " << i.getType() << std::endl;
	return out;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */