#include "subsystems/DrivetrainSubsystem.h"

using namespace DrivetrainConstants;

DrivetrainSubsystem::DrivetrainSubsystem() {
    _motor_left.ConfigFactoryDefault();
    _motor_right.ConfigFactoryDefault();

    _motor_left.SetInverted(!RIGHT_INVERTED);
    _motor_right.SetInverted(RIGHT_INVERTED);

    _motor_left.SetNeutralMode(ctre::phoenix::motorcontrol::Brake);
    _motor_right.SetNeutralMode(ctre::phoenix::motorcontrol::Brake);
}

void DrivetrainSubsystem::Periodic() {}

void DrivetrainSubsystem::TankDrive(double leftAxis, double rightAxis){
    _motor_left.Set(leftAxis);
    _motor_left.Set(rightAxis);
}