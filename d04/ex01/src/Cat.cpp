#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() {
	type = "Cat";
	brain = new Brain("Cat idea");
	std::cout << "Cat constructed" << std::endl;
}

Cat::Cat( const Cat & src )
{
	*this = src;
	std::cout << "Cat constructed by copy" << std::endl;
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
		brain = new Brain(*(src.getBrain()));
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

const Brain *Cat::getBrain(void) const {
	return brain;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */