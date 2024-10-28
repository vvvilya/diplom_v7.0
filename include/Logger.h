#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>
#include "Coordinate.h"

class Logger {
public:
    Logger(const std::string& filename);
    ~Logger();
    
    void log(double time, const Coordinate& truePos, const Coordinate& gnssPos, 
             const Coordinate& insPos, const Coordinate& filteredPos);

private:
    std::ofstream logFile;
    void writeHeader();
};

#endif // LOGGER_H
