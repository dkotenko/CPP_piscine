#include "ZombieHorde.hpp"


int main() {
    int number;
    srand(static_cast<unsigned int>(time(0)));

    std::cout << "Enter the number of zombies" << std::endl;
    std::cin >> number;
    ZombieHorde horde = ZombieHorde(number);
    horde.announce();
    return 0;
}
