#ifndef D01_CLAPTRAP_HPP
#define D01_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        std::string name;
        int hitpoints;
        int energyPoints;
        int attackDamage;

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &clapTrap);
        ClapTrap();
        ~ClapTrap();
        
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
