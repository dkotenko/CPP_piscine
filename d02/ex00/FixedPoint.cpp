#include "FixedPoint.h"

FixedPoint::FixedPoint() {
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

FixedPoint::~FixedPoint() {
    std::cout << "Destructor called" << std::endl;
}

FixedPoint::FixedPoint(FixedPoint const &fixedPoint) {
    std::cout << "Copy constructor called" << std::endl;
    value = fixedPoint.getRawBits();
}

FixedPoint &FixedPoint::operator=(FixedPoint const &fixedPoint) {
    std::cout << "Assignation operator called" << std::endl;
    this->value = fixedPoint.getRawBits();
    return *this;
}

int FixedPoint::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}
void FixedPoint::setRawBits( int const raw ) {
    value = raw;
}
