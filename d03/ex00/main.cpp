#include "ClapTrap.hpp"

int main() {
    ClapTrap trap("trap");
    std::cout << trap << std::endl;

    std::string target = "target";
    trap.attack(target);
    trap.takeDamage(2);
    std::cout << trap << std::endl;
    trap.beRepaired(10);
    std::cout << trap << std::endl;

    return 0;
}
