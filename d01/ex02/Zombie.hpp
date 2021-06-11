#ifndef D01_ZOMBIE_HPP
#define D01_ZOMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string name;
        std::string type;

    public:
        void announce();
        Zombie(std::string name, std::string type);
        ~Zombie();
};


#endif //D01_ZOMBIE_H
