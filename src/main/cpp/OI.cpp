#include "OI.h"
#include "Constants.h"

using namespace OperatorConstants;

double OI::GetLeftY() {return frc::ApplyDeadband(_drive_controller.GetLeftY(), JOYSTICK_DEADBAND);}
double OI::GetLeftX() {return frc::ApplyDeadband(_drive_controller.GetLeftX(), JOYSTICK_DEADBAND);}
double OI::GetRightY() {return frc::ApplyDeadband(_drive_controller.GetRightY(), JOYSTICK_DEADBAND);}
double OI::GetRightX() {return frc::ApplyDeadband(_drive_controller.GetRightX(), JOYSTICK_DEADBAND);}
