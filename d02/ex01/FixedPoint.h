#ifndef D02_FIXEDPOINT_H
#define D02_FIXEDPOINT_H

#include <iostream>

class FixedPoint {
private:
    int value;
    static const int scale = 8;
public:
    FixedPoint();
    FixedPoint(int value);
    FixedPoint(float value);
    ~FixedPoint();
    FixedPoint(const FixedPoint &fixedPoint);
    FixedPoint& operator=(const FixedPoint &fixedPoint);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat() const;
    int toInt() const;
};
std::ostream& operator<<(std::ostream& os, const FixedPoint &fixedPoint);

#endif
