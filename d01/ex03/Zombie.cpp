#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << "< " << name << " (" << type << ")> announce" << std::endl;
}

Zombie::Zombie() {
    type = "FURIOUS ZOMBIE";
}

Zombie::~Zombie() {
    std::cout << "< " << name << " (" << type << ")> was deleted" << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}



