#include "Trajectory.h"
#include <iostream>

Trajectory::Trajectory(const char* filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening trajectory file: " << filename << std::endl;
        return;
    }
    
    double x, y, z;
    while (file >> x >> y >> z) {
        positions.emplace_back(x, y, z); // Assuming Coordinate has a constructor that takes x, y, z
    }
}

Coordinate Trajectory::getPosition(size_t index) const {
    if (index < positions.size()) {
        return positions[index];
    }
    return Coordinate(); // Return a default Coordinate if index is out of bounds
}

size_t Trajectory::size() const {
    return positions.size();
}
