#ifndef D01_SCAVTRAP_HPP
#define D01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string name) : public ClapTrap(name);
        ~ScavTrap(): ~ClapTrap();
        void guardGate();
};

std::ostream& operator<<(std::ostream& os, ClapTrap &clapTrap);

#endif
