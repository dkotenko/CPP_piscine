#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n){
    char const *arr[10] = {"Squaller","Polyp","Tank","Bawler","Withering Zombie","Glazer","Horde Zombie","Ticker","Bouncer","Raver"};
    srand(static_cast<unsigned int>(time(0)));

    if (n > 0 && n < 200)
    {
        zombies = new Zombie[n]();
        for (int i = 0;i < n; i++)
        {
            int nameIndex = rand() % 10;
            zombies[i].setName(arr[nameIndex]);
            zombies[i].announce();
        }
    } else
    {
        std::cout << "zombies number must be in range [1;200]\n";
    }
}

ZombieHorde::~ZombieHorde() {
    std::cout << "ZombieHorde was deleted\n";
}

void ZombieHorde::announce() {

}
