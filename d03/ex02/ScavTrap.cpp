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

void ScavTrap::attack(std::string const & target) {
    std::cout << "ScavTrap " << name << " attacks " << target << ", " << attackDamage << " damage inflicted" << std::endl;
}