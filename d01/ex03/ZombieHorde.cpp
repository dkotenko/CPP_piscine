#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n){
    zombiesNumber = n;
    char const *arr[10] = {"Squaller","Polyp","Tank","Bawler","Withering Zombie","Glazer","Horde Zombie","Ticker","Bouncer","Raver"};

    if (n > 0 && n < 200)
    {
        zombies = new Zombie[n]();
        for (int i = 0;i < n; i++)
        {
            int nameIndex = rand() % 10;
            zombies[i].setName(arr[nameIndex]);
        }
    } else
    {
        std::cout << "zombies number must be in range [1;200]" << std::endl;
    }
}

ZombieHorde::~ZombieHorde() {
    delete [] zombies;
    std::cout << "ZombieHorde was deleted" << std::endl;
}

void ZombieHorde::announce() {
    for (int i = 0; i < zombiesNumber; i++) {
        zombies[i].announce();
    }

}
