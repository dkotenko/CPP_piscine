#ifndef D01_HUMANB_H
#define D01_HUMANB_H
#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon *weapon;

    public:
        void attack();
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &type);
};


#endif
