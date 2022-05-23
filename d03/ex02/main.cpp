#include "FragTrap.hpp"

void printStage(std::string stageName) {
    std::cout << "===" << stageName << "===" << std::endl;
}

int main() {
    printStage("FragTrap created");
    FragTrap trap("FragTrap");
    std::cout << trap << std::endl;

    printStage("FragTrap attacked");
    std::string target = "target";
    trap.attack(target);
    std::cout << std::endl;

    printStage("FragTrap took damage");
    trap.takeDamage(2);
    std::cout << trap << std::endl;
    std::cout << std::endl;

    printStage("FragTrap repaired");
    trap.beRepaired(10);
    std::cout << trap << std::endl;

    printStage("FragTrap highFivesGuys");
    trap.highFivesGuys();
    std::cout << std::endl;

    printStage("FragTrap destoyed");
    return 0;
}
