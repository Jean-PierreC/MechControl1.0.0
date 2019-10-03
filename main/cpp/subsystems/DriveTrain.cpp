/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include <iostream>
#include "subsystems/DriveTrain.h"
#include "commands/TankDrive.h"
#include "commands/ArcadeDrive.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"), left(new TalonSRX(2)), right(new TalonSRX(3)) {}

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  SetDefaultCommand(new ArcadeDrive());
}
void DriveTrain::Drive(double leftInput , double rightInput){
  left->Set(ControlMode::PercentOutput, leftInput + rightInput);
  right->Set(ControlMode::PercentOutput, -(leftInput - rightInput));

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
