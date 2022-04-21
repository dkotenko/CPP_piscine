#ifndef D03_DIAMONDTRAP_HPP
#define D03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
        void attack(std::string const & target);
};

#endif
