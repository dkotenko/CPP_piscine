#include "ScavTrap.hpp"

void printStage(std::string stageName) {
    std::cout << "===" << stageName << "===" << std::endl;
}

int main() {
    printStage("ScavTrap created");
    ScavTrap trap("Scavenger trap");
    ScavTrap defaultScavTrap;
    defaultScavTrap = trap;
    std::cout << trap << std::endl;

    printStage("ScavTrap attacked");
    std::string target = "target";
    trap.attack(target);
    std::cout << std::endl;

    printStage("ScavTrap took damage");
    trap.takeDamage(2);
    std::cout << trap << std::endl;
    std::cout << std::endl;

    printStage("ScavTrap repaired");
    trap.beRepaired(10);
    std::cout << trap << std::endl;

    printStage("ScavTrap guardGate");
    trap.guardGate();
    std::cout << std::endl;

    printStage("ScavTrap destoyed");
    return 0;
}
