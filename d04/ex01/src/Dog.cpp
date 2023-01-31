#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() {
	type = "Dog";
	brain = new Brain("Dog idea");
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog( const Dog & src )
{

	*this = src;
	std::cout << "Dog constructed by copy" << std::endl;
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
		brain = new Brain(*(rhs.getBrain()));
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

Brain *Dog::getBrain(void) {
	return brain;
}

const Brain *Dog::getBrain(void) const {
	return brain;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */