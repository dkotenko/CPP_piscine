#ifndef D01_CLAPTRAP_HPP
#define D01_CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class ClapTrap {
    protected:
        std::string name;
        int hitpoints;
        int energyPoints;
        int attackDamage;

    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &clapTrap);
        ClapTrap &operator=(const ClapTrap & clapTrap);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        int getAttackDamage();
        int getHitpoints();
        int getEnergyPoints();
};

std::ostream& operator<<(std::ostream& os, ClapTrap &clapTrap);

#endif
