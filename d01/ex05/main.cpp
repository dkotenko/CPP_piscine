#include "Human.hpp"


int main() {

    Human human = Human();
    human.identify();
    human.getBrain()->identify();
    return 0;
}
