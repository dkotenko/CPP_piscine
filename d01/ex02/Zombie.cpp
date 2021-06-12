#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << "< " << name << " (" << type << ")> announce" << std::endl;
}

Zombie::Zombie(std::string name, std::string type) {
    this->name = name;
    this->type = type;
}

Zombie::~Zombie() {
    std::cout << "< " << name << " (" << type << ")> was deleted" << std::endl;
}


