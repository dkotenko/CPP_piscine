#include "Human.hpp"

Human::Human() {
    brain = Brain();
}

Human::~Human(){}

void Human::identify() {
    std::cout << &brain << std::endl;
}

Brain *Human::getBrain() {
    return &brain;
}