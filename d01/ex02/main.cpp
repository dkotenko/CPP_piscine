#include "ZombieEvent.hpp"

int main() {
    srand(static_cast<unsigned int>(time(0)));
    ZombieEvent *event = new ZombieEvent();

    Zombie *a = event->newZombie("JACK THE ZOMBIE");
    event->setZombieType("CONQUEROR");
    Zombie *b = event->newZombie("Natali");
    a->announce();
    b->announce();
    event->randomChump();
    event->randomChump();
    event->randomChump();
    delete b;
    delete a;
    delete event;
    return 0;
}
