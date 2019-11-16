/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/


#include "subsystems/Piston.h"
#include "RobotMap.h"
#include <iostream>
#include "commands/Piston_Retract.h"
Piston::Piston() :  Subsystem("Piston"), piston(new DoubleSolenoid(PCM_TALON_ID, PISTON_FORWARD_CHANNEL, PISTON_REVERSE_CHANNEL)) {}

void Piston::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());

}
void Piston::extend(){
  piston->Set(frc::DoubleSolenoid::Value::kForward);

}
void  Piston::retract(){
	piston->Set(frc::DoubleSolenoid::Value::kReverse);
}
void Piston::solenoidOff(){
	piston->Set(frc::DoubleSolenoid::Value::kOff);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
