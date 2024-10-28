#ifndef KALMANFILTER_H
#define KALMANFILTER_H

#include "Coordinate.h"

class KalmanFilter {
public:
    Coordinate filter(const Coordinate& gnssPos, const Coordinate& insPos);
};

#endif // KALMANFILTER_H
