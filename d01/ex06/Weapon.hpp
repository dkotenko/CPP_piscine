#ifndef D01_WEAPON_H
#define D01_WEAPON_H
#include <iostream>

class Weapon {
private:
    std::string type;

public:
    Weapon(std::string type);
    ~Weapon();
    std::string const &getType();
    void setType(std::string type);
};


#endif
