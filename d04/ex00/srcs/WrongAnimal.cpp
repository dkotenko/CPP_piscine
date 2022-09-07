#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
    this->type = type;
    std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) {
    *this = WrongAnimal;
}

WrongAnimal::WrongAnimal(){
    type = "WrongAnimal";
    std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const  &WrongAnimal) {
    type = WrongAnimal.type;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "loud WrongAnimal sound" << std::endl;
}

std::string const WrongAnimal::getType(void) const {
    return type;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "WrongAnimal, type = " << i.getType() << std::endl;
	return o;
}

void WrongAnimal::print() const {
    std::cout << "Animal, type = " << getType() << std::endl;
}
