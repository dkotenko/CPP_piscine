#ifndef D01_SCAVTRAP_HPP
#define D01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
        void attack(std::string const & target);
};

#endif
