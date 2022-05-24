#include "DiamondTrap.hpp"

void printStage(std::string stageName) {
    std::cout << "===" << stageName << "===" << std::endl;
}

int main() {
    printStage("DiamondTrap created");
    DiamondTrap trap("DiamondTrap");
    std::cout << trap << std::endl;

    printStage("DiamondTrap attacked");
    std::string target = "target";
    trap.attack(target);
    std::cout << std::endl;

    printStage("DiamondTrap took damage");
    trap.takeDamage(2);
    std::cout << trap << std::endl;
    std::cout << std::endl;

    printStage("DiamondTrap repaired");
    trap.beRepaired(10);
    std::cout << trap << std::endl;

    printStage("DiamondTrap highFivesGuys");
    trap.highFivesGuys();
    std::cout << std::endl;


    printStage("DiamondTrap destoyed");
    return 0;
}
