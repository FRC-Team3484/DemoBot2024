#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>
#include <units/time.h>

namespace OperatorConstants {
    constexpr int DRIVER_CONTROLLER_PORT = 0;
    constexpr double TRIGGER_DEADBAND = 0.01;
    constexpr double JOYSTICK_DEADBAND = 0.02;
}

namespace DrivetrainConstants {
    constexpr bool RIGHT_INVERTED = true;
    constexpr int MOTOR_LEFT_PORT = 3;
    constexpr int MOTOR_RIGHT_PORT = 2;
}

#endif