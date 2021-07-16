#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap deleted" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->name = name;
    hitpoints = 10;
    attackDamage = 0;
    energyPoints = 10;
    std::cout << "ClapTrap was created: current name: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
    *this = clapTrap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const  &clapTrap) {
    name = clapTrap.name;
    hitpoints = clapTrap.hitpoints;
    energyPoints = clapTrap.energyPoints;
    attackDamage = clapTrap.attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const & target) {
    std::cout << "ClapTrap " << name << " attacks " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name << " received damage:" << amount << std::endl;
    hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    hitpoints += (int)amount;
    std::cout << "ClapTrap " << name << " has been repaired: " << amount << std::endl;
}

std::ostream& operator<<(std::ostream& os, ClapTrap &clapTrap) {
    os << "ClapTrap {name: " << clapTrap.getName() << ", hitpoints: " << clapTrap.getHitpoints() << ", energyPoints:" << \
    clapTrap.getEnergyPoints() << ", attackDamage: " << clapTrap.getAttackDamage() << "}" << std::endl;
    return os;
}

std::string ClapTrap::getName() {
    return name;
}

int ClapTrap::getAttackDamage() {
    return attackDamage;
}

int ClapTrap::getHitpoints() {
    return hitpoints;
}

int ClapTrap::getEnergyPoints() {
    return energyPoints;
}