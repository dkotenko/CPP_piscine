#include "Animal.hpp"

Animal::~Animal() {
}

Animal::Animal() :
                type("Animal") {}

Animal::Animal(const Animal &Animal) {
    *this = Animal;
}

Animal &Animal::operator=(Animal const  &Animal) {
    type = Animal.type;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "loud Animal sound" << std::endl;
}

std::string const  &Animal::getType(void) const {
    return type;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Animal, type = " << i.getType() << std::endl;
	return o;
}


std::ostream &			operator<<( std::ostream & o, const Animal *i )
{
	o << "Animal, type = " << (*i).getType() << std::endl;
	return o;
}

void Animal::print() const {
    std::cout << "Animal, type = " << getType() << std::endl;
}
