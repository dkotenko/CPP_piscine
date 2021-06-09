#include "Pony.hpp"

Pony::~Pony() {
    std::cout << "Pony was deleted: no color, no pony" << std::endl;
}

Pony::Pony(std::string color) {
    this->color = color;
    std::cout << "Pony was created: current color: " << getColor() << std::endl;
}

void Pony::setColor(std::string color) {
    this->color = color;
}

std::string Pony::getColor() {
    return color;
}
