#ifndef D01_ZOMBIEEVENT_HPP
#define D01_ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
private:
    std::string zombieType;
public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string zombieType);
    Zombie* newZombie(std::string name);
    void randomChump();


};


#endif
