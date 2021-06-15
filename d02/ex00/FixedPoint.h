#ifndef D02_FIXEDPOINT_H
#define D02_FIXEDPOINT_H

#include <iostream>

class FixedPoint {
private:
    int value;
    static const int point = 8;
public:
    FixedPoint();
    ~FixedPoint();
    FixedPoint(const FixedPoint &fixedPoint);
    FixedPoint operator=(const FixedPoint &fixedPoint);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};


#endif
