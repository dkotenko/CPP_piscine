#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog( const Dog & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete(brain);
	std::cout << "Dog destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->brain = rhs.getBrain();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Dog, type = " << i.getType() << std::endl;
	return o;
}

void Dog::makeSound() const {
    std::cout << "Dog sound: Bark" << std::endl;
}

Brain *Dog::getBrain(void) const {
	return brain;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */