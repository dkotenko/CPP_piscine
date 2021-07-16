#include "ScavTrap.hpp"

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap deleted" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: public ClapTrap(name)
{
    this->name = name;
    hitpoints = 100;
    attackDamage = 20;
    energyPoints = 50;
    std::cout << "ScavTrap was created: current name: " << name << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap entered guard mode" << name << std::endl;
}