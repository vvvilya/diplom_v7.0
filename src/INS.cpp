#include "INS.h"
#include <cstdlib> // For rand()

Coordinate INS::getPosition(const Coordinate& truePos) {
    // Simulate INS position with some random noise
    double noiseX = static_cast<double>(rand() % 20) / 100.0; // Simulate noise
    double noiseY = static_cast<double>(rand() % 20) / 100.0; // Simulate noise
    double noiseZ = static_cast<double>(rand() % 20) / 100.0; // Simulate noise
    return Coordinate(truePos.x + noiseX, truePos.y + noiseY, truePos.z + noiseZ);
}
