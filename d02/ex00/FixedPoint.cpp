#include "FixedPoint.h"

FixedPoint::FixedPoint() {
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

FixedPoint::~FixedPoint() {
    std::cout << "Default destructor called" << std::endl;
}

FixedPoint::FixedPoint(const FixedPoint &fixedPoint) {
    value = fixedPoint.value;
    std::cout << "Copy constructor called" << std::endl;
}

FixedPoint FixedPoint::operator=(const FixedPoint &fixedPoint) {
    std::cout << "Assignation operator called" << std::endl;
    value = fixedPoint.value;
    return *this;
}

int FixedPoint::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}
void FixedPoint::setRawBits( int const raw ) {
    value = raw;
}
