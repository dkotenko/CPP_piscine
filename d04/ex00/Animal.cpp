#include "Animal.hpp"

Animal::~Animal() {
    std::cout << "Animal deleted" << std::endl;
}

Animal::Animal(std::string type) {
    this->type = type;
    std::cout << "Animal was created: current type: " << type << std::endl;
}

Animal::Animal(const Animal &Animal) {
    *this = Animal;
}

Animal::Animal() {
    std::cout << "Animal was created: default constructor" << std::endl;
}

Animal &Animal::operator=(Animal const  &Animal) {
    type = Animal.type;
    return *this;
}