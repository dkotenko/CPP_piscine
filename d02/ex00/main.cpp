#include "FixedPoint.h"

int main() {
    FixedPoint a;
    FixedPoint b( a );
    FixedPoint c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}
