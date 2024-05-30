#include "commands/TeleopDriveCommand.h"

TeleopDriveCommand::TeleopDriveCommand(DrivetrainSubsystem* drivetrain, OI* oi)
    : _drivetrain_subsystem{drivetrain}, _oi{oi} {
        AddRequirements(_drivetrain_subsystem);
    }
void TeleopDriveCommand::Initialize(){}

void TeleopDriveCommand::Execute() {
    _drivetrain_subsystem->TankDrive(_oi->GetLeftY(), _oi->GetRightY());
}

void TeleopDriveCommand::End(bool interrupted){
    _drivetrain_subsystem->TankDrive(0,0);
}

bool TeleopDriveCommand::IsFinished(){
    return false;
}