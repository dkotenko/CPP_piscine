#include "Animal.hpp"

Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal() :
                type("Animal") {
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(const Animal &animal) {
    *this = animal;
}

Animal &Animal::operator=(Animal const  &animal) {
    if (this != &animal) {
        this->type = animal.type;
    }
    std::cout << "Animal constructed by copy" << std::endl;
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
