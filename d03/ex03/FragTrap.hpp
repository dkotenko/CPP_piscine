#ifndef D03_FRAGTRAP_HPP
#define D03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
        void attack(std::string const & target);
};

#endif
