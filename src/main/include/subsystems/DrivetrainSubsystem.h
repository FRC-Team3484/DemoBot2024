#ifndef DRIVETRATIN_H
#define DRIVETRATIN_H

#include "Constants.h"
#include "ctre/Phoenix.h"
#include "frc/drive/DifferentialDrive.h"
#include "frc2/command/SubsystemBase.h"


class DrivetrainSubsystem:public frc2::SubsystemBase {
    public:
        DrivetrainSubsystem();
        void Periodic() override;
        void TankDrive(double leftAxis, double rightAxis);

    private:
        WPI_TalonSRX _motor_left{DrivetrainConstants::MOTOR_LEFT_PORT};
        WPI_TalonSRX _motor_right{DrivetrainConstants::MOTOR_RIGHT_PORT};

};



#endif