// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#ifndef ROBOT_H
#define ROBOT_H

#include "OI.h"
#include "Constants.h"
#include "subsystems/DrivetrainSubsystem.h"
#include "commands/TeleopDriveCommand.h"

#include <string>
#include <optional>

#include <fmt/core.h>
#include <frc/TimedRobot.h>
#include <frc2/command/CommandPtr.h>
#include <frc2/command/CommandScheduler.h>
#include <frc/smartdashboard/SmartDashboard.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void DisabledExit() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void AutonomousExit() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TeleopExit() override;
  void TestInit() override;
  void TestPeriodic() override;
  void TestExit() override;

 private:
     OI _oi{};
    DrivetrainSubsystem _drivetrain_subsystem{};
    TeleopDriveCommand _drive_command{&_drivetrain_subsystem, &_oi};

    std::optional<frc2::CommandPtr> _auton_command;
};

#endif