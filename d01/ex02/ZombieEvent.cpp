#include "ZombieEvent.hpp"
#include <experimental/random>

void ZombieEvent::setZombieType(std::string zombieType) {
    this->zombieType = zombieType;
}



Zombie* ZombieEvent::newZombie(std::string name) {
    return new Zombie(name, zombieType);
}

ZombieEvent::ZombieEvent() {
    zombieType = "DEFAULT";
}

ZombieEvent::~ZombieEvent() {}

void ZombieEvent::randomChump() {
    char const *arr[10] = {"Squaller","Polyp","Tank","Bawler","Withering Zombie","Glazer","Horde Zombie","Ticker","Bouncer","Raver"};

    srand(static_cast<unsigned int>(time(0)));
    int nameIndex = rand() % 10;
    Zombie chump = Zombie(arr[nameIndex], zombieType);
    chump.announce();
}


