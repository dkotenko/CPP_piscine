#include "FixedPoint.hpp"
#include <cmath>

FixedPoint::FixedPoint() {
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

FixedPoint::FixedPoint(int value) {
    this->value = value << scale;
    std::cout << "Int constructor called" << std::endl;
}

FixedPoint::FixedPoint(float value) {
    this->value = roundf(value * (1 << scale));
    std::cout << "Float constructor called" << std::endl;
}

FixedPoint::~FixedPoint() {
    std::cout << "Destructor called" << std::endl;
}

FixedPoint::FixedPoint(const FixedPoint &fixedPoint) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixedPoint;
}

FixedPoint &FixedPoint::operator=(FixedPoint const  &fixedPoint) {
    std::cout << "Assignation operator called" << std::endl;
    value = fixedPoint.value;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const FixedPoint &fixedPoint) {
    os << fixedPoint.toFloat();
    return os;
}

int FixedPoint::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}
void FixedPoint::setRawBits( int const raw ) {
    value = raw;
}

float FixedPoint::toFloat() const{
    return (float)value / (float)(1 << scale);
}
int FixedPoint::toInt() const{
    return value >> scale;
}