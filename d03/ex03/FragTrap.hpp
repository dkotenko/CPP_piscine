#ifndef D03_FRAGTRAP_HPP
#define D03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &fragTrap);
        FragTrap &operator=(const FragTrap & fragTrap);
        void highFivesGuys(void);
};

#endif
