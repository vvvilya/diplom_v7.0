#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate {
public:
    double x;
    double y;
    double z;

    Coordinate() : x(0), y(0), z(0) {}
    Coordinate(double x, double y, double z) : x(x), y(y), z(z) {}
};

#endif // COORDINATE_H
