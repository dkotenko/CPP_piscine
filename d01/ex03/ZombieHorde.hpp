#ifndef D01_ZOMBIEHORDE_H
#define D01_ZOMBIEHORDE_H

# include "Zombie.hpp"

class ZombieHorde {
private:
    Zombie *zombies;
    int zombiesNumber;

public:
    ZombieHorde(int n);
    ~ZombieHorde();
    void announce();
};


#endif
