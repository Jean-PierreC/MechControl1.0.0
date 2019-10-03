/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Ctre/Phoenix.h>
#pragma once
#include <iostream>
using namespace std;
#include <frc/commands/Subsystem.h>

class DriveTrain : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities
  TalonSRX* left;
  TalonSRX* right;
  double leftPower;
  double rightPower;
 public:
  DriveTrain();
  void Drive(double leftInput, double rightInput);
  void InitDefaultCommand() override;
};
