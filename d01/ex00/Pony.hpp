#ifndef D01_PONY_H
#define D01_PONY_H

#include <iostream>

class Pony {
    private:
        std::string color;

    public:
        Pony(std::string color);
        ~Pony();
        void setColor(std::string color);
        std::string getColor();
};


#endif
