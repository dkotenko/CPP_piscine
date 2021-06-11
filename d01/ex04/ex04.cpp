#include <iostream>

int main() {
    std::string s = "HI THIS IS BRAIN";
    std::string *pointer = &s;
    std::string &reference = s;

    std::cout << "The pointer: " << *pointer << std::endl;
    std::cout << "The reference: " << reference << std::endl;
    return 0;
}
