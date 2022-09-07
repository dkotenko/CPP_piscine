#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
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
	delete(brain);
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

Brain *Cat::getBrain(void) {
	return brain;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */