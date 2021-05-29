#include <iostream>
#include <string>

void printUpperString(std::string s) {
    for (int i=0; i < s.length(); i++) {
        std::cout << toupper(s[i]);
    }
}


int main (int argc, char* argv[])
{
    int i = 0;

    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        while (++i < argc - 1)
        {
            printUpperString(argv[i]);
        }
        std::cout << std::endl;
    }
    return 0;
}