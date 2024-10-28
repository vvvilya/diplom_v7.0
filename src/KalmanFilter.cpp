#include "KalmanFilter.h"

Coordinate KalmanFilter::filter(const Coordinate& gnssPos, const Coordinate& insPos) {
    // Simple Kalman filter implementation (for illustration)
    // In a real implementation, you would perform actual calculations
    return Coordinate((gnssPos.x + insPos.x) / 2,
                      (gnssPos.y + insPos.y) / 2,
                      (gnssPos.z + insPos.z) / 2);
}
