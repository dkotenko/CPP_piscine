#pragma once

#include "A.hpp"
#include "B.hpp"
#include "C.hpp" 

enum childs {
    CHILDS_A,
    CHILDS_B,
    CHILDS_C,
    CHILDS_NUMBER
};

Base * generate(void);
void identify(Base *p);
void identify(Base& p);