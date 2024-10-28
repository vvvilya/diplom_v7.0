#include <iostream>
#include <thread>
#include <chrono>
#include "GNSS.h"
#include "INS.h"
#include "Logger.h"
#include "Trajectory.h"
#include "Coordinate.h"
#include "KalmanFilter.h"

int main() {
    Logger logger("log.txt");
    Trajectory trajectory("trajectory.txt");

    GNSS gnssSensor;
    INS insSensor;
    KalmanFilter kf;

    double deltaTime = 0.1; // seconds

    for (size_t i = 0; i < trajectory.size(); ++i) {
        Coordinate truePos = trajectory.getPosition(i);
        Coordinate gnssPos = gnssSensor.getPosition(truePos);
        Coordinate insPos = insSensor.getPosition(truePos);

        Coordinate filteredPos = kf.filter(gnssPos, insPos);

        logger.log(i * deltaTime, truePos, gnssPos, insPos, filteredPos);

        std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(deltaTime * 1000)));
    }

    return 0;
}
