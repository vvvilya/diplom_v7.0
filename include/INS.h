#ifndef INS_H
#define INS_H

#include "Coordinate.h"

class INS {
public:
    Coordinate getPosition(const Coordinate& truePos);
};

#endif // INS_H
