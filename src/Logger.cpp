#include "Logger.h"

Logger::Logger(const std::string& filename) {
    logFile.open(filename);
    if (logFile.is_open()) {
        writeHeader();
    }
}

Logger::~Logger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

void Logger::writeHeader() {
    logFile << "Time (s), True Position (x,y,z), GNSS Position (x,y,z), "
                "INS Position (x,y,z), Filtered Position (x,y,z)\n";
}

void Logger::log(double time, const Coordinate& truePos, const Coordinate& gnssPos, 
                 const Coordinate& insPos, const Coordinate& filteredPos) {
    logFile << time << ", "
            << truePos.x << "," << truePos.y << "," << truePos.z << ", "
            << gnssPos.x << "," << gnssPos.y << "," << gnssPos.z << ", "
            << insPos.x << "," << insPos.y << "," << insPos.z << ", "
            << filteredPos.x << "," << filteredPos.y << "," << filteredPos.z << "\n";
}
