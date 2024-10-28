#ifndef GNSS_H
#define GNSS_H

#include "Coordinate.h"

class GNSS {
public:
    Coordinate getPosition(const Coordinate& truePos);
};

#endif // GNSS_H
