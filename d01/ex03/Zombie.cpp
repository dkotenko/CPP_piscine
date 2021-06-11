#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << "< " << name << " (" << type << ")> announce\n";
}

Zombie::Zombie() {
    type = "FURIOUS ZOMBIE";
}

Zombie::~Zombie() {
    std::cout << "< " << name << " (" << type << ")> was deleted\n";
}

void Zombie::setName(std::string name) {
    this->name = name;
}



