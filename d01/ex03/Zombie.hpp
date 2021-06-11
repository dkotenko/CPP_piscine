#ifndef D01_ZOMBIE_HPP
#define D01_ZOMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string name;
        std::string type;

    public:
        void announce();
        Zombie();
        ~Zombie();
        void setName(std::string name);
};


#endif //D01_ZOMBIE_H
