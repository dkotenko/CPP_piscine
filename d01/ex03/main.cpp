#include "ZombieHorde.hpp"


int main() {

    int number;

    std::cout << "Enter the number of zombies\n";
    std::cin >> number;
    ZombieHorde horde = ZombieHorde(number);
    return 0;
}
