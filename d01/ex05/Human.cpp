#include "Human.hpp"

Human::Human() {
    brain = Brain();
}

Human::~Human(){}

std::string Human::identify() {
    std::stringstream humanStream;

    humanStream << &brain;
    return humanStream.str();
}

Brain *Human::getBrain() {
    return &brain;
}