#include "Pony.hpp"

void ponyOnTheHeap() {
    Pony *pony = new Pony("RED");
    pony->setColor("GREEN");
    std::cout << "Pony on the heap: current color: " << pony->getColor() << std::endl;
    delete pony;
}

void ponyOnTheStack() {
    Pony pony("RED");
    pony.setColor("VIOLET");
    std::cout << "Pony on the stack: current color: " << pony.getColor() << std::endl;
}

int main() {
    std::cout << "===== STACK =====" << std::endl;
    ponyOnTheStack();
    std::cout << "===== HEAP  =====" << std::endl;
    ponyOnTheHeap();
    return 0;
}
