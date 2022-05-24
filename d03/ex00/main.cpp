#include "ClapTrap.hpp"

int main() {
    ClapTrap trapDefault;
    ClapTrap trap("trap");
    std::cout << trap << std::endl;

    std::cout << "assign default trap to 'trap', output:" << std::endl;
    trapDefault = trap;
    std::cout << trapDefault << " - it is default trap" << std::endl;

    std::string target = "target";
    trap.attack(target);
    trap.takeDamage(2);
    std::cout << trap << std::endl;
    trap.beRepaired(10);
    std::cout << trap << std::endl;

    return 0;
}
