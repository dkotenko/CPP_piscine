#ifndef D01_HUMANA_H
#define D01_HUMANA_H
#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon &weapon;

public:
    void attack();
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
};


#endif
