#include "FragTrap.hpp"

FragTrap::~FragTrap() {
    std::cout << "FragTrap deleted" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitpoints = 100;
    attackDamage = 30;
    energyPoints = 100;
    std::cout << "FragTrap was created: current name: " << name << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap '" << name << "' gives your high five!" << std::endl;
}

void FragTrap::attack(std::string const & target) {
    std::cout << "FragTrap " << name << " attacks " << target << ", " << attackDamage << " damage inflicted" << std::endl;
}