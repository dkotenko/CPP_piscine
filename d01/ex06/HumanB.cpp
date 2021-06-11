#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
}

HumanB::~HumanB(){}

void HumanB::attack() {
    std::string type = weapon->getType();
    std::cout << name << " attacks with his " << type << std::endl;
}

void HumanB::setWeapon(Weapon &type){
    this->weapon = &type;
}
