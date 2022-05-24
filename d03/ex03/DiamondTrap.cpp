#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap created (default constructor)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {
    *this = diamondTrap;
    std::cout << "DiamondTrap copied (copy constructor)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string new_name) : FragTrap(new_name), ScavTrap(new_name)
{
    ClapTrap::name = new_name + "_clap_name";
    DiamondTrap::name = new_name;
    this->hitpoints = FragTrap::hitpoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

    std::cout << "DiamondTrap was created: current name: " << this->name << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap deleted" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &right)
{
	this->attackDamage = right.attackDamage;
	this->energyPoints = right.energyPoints;
	this->hitpoints = right.hitpoints;
	this->name = right.name;
    ClapTrap::name = right.ClapTrap::name;
    std::cout <<  "DiamondTrap assignation operator called" << std::endl;
	return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap names: own name - " << name << " , ClapTrap name - " << ClapTrap::name << std::endl;
}