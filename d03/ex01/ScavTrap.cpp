#include "ScavTrap.hpp"

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap deleted" << std::endl;
}

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap was created: default constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) {
    *this = scavTrap;
    std::cout << "ScavTrap copied (copy constructor)" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const  &scavTrap) {
    name = scavTrap.name;
    hitpoints = scavTrap.hitpoints;
    energyPoints = scavTrap.energyPoints;
    attackDamage = scavTrap.attackDamage;
    return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitpoints = 100;
    attackDamage = 20;
    energyPoints = 50;
    std::cout << "ScavTrap was created: current name: " << name << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " entered guard mode" << std::endl;
}