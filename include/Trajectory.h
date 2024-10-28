#ifndef TRAJECTORY_H
#define TRAJECTORY_H

#include <vector>
#include <fstream>
#include "Coordinate.h"

class Trajectory {
public:
    Trajectory(const char* filename);
    Coordinate getPosition(size_t index) const;
    size_t size() const;

private:
    std::vector<Coordinate> positions;
};

#endif // TRAJECTORY_H
