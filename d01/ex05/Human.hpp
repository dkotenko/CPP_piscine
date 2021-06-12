#ifndef D01_HUMAN_H
#define D01_HUMAN_H
#include "Brain.hpp"

class Human {
private:
    Brain brain;

public:
    Brain *getBrain();
    std::string identify();
    Human();
    ~Human();
};


#endif
