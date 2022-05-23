#ifndef D03_DIAMONDTRAP_HPP
#define D03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string _name;
    public:
        void whoAmI(void);
        using ScavTrap::attack;
        DiamondTrap &operator=(const DiamondTrap &right);
        DiamondTrap(const DiamondTrap &diamondTrap);
        DiamondTrap(std::string name);
        DiamondTrap();
        ~DiamondTrap();
};

#endif
