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
        ClapTrap(const ClapTrap &clapTrap);
        ~ClapTrap();
        ClapTrap();
        ClapTrap &operator=(const ClapTrap & clapTrap);
        void attack(std::string const & target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
        virtual std::string getName();
        virtual int getAttackDamage();
        virtual int getHitpoints();
        virtual int getEnergyPoints();
};

std::ostream& operator<<(std::ostream& os, ClapTrap &clapTrap);

#endif
