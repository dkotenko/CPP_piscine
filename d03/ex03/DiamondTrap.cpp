#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap created (default constructor)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {
    *this = diamondTrap;
    std::cout << "DiamondTrap copied (copy constructor)" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):
    ClapTrap(name + "_clap_name"),
    ScavTrap(name),
    FragTrap(name)
{
    this->name = name;
    hitpoints = FragTrap::getHitpoints();
    attackDamage = FragTrap::getAttackDamage();
    energyPoints = ScavTrap::getEnergyPoints();
    std::cout << "DiamondTrap was created: current name: " << name << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap deleted" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &right)
{
	if(this == &right)
		return *this;
	this->attackDamage = right.attackDamage;
	this->energyPoints = right.energyPoints;
	this->hitPoints = right.hitPoints;
	this->name = right.name;
    std::cout <<  "DiamondTrap assignation operator called" << std::endl;
	return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap names: own name - " << name << " , ClapTrap name - " << ClapTrap::name << std::endl;
}