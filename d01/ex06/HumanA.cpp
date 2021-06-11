#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
 name(name), weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack() {
    std::string type =  weapon.getType();
    std::cout << name << " attacks with his " << type << std::endl;
}

