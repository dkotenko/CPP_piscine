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
	type = src.type;
	sound = "Dog sound: Bark";
	brain = new Brain();
	for (int i = 0; i < IDEAS_NUM; i++) {
		brain->ideas[i] = src.getBrain()->ideas[i];
	}
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
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Dog, type = " << i.getType() << std::endl;
	return o;
}

void Dog::makeSound() const {
    std::cout << "Bark" << std::endl;
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