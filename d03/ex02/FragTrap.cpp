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

FragTrap::FragTrap(const FragTrap &fragTrap) {
    *this = fragTrap;
    std::cout << "FragTrap copied (copy constructor)" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const  &fragTrap) {
    name = fragTrap.name;
    hitpoints = fragTrap.hitpoints;
    energyPoints = fragTrap.energyPoints;
    attackDamage = fragTrap.attackDamage;
    return *this;
}

FragTrap::FragTrap() {
    std::cout << "FragTrap was created: default constructor" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap '" << name << "' gives you high five!" << std::endl;
}