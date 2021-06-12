#include "Human.hpp"


int main() {

    Human human = Human();
    std::cout << human.identify() << std::endl;
    std::cout << human.getBrain()->identify() << std::endl;

    return 0;
}
