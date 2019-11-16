/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Piston_Extend.h"
#include "Robot.h"
#include "iostream"
Piston_Extend::Piston_Extend() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(Robot::m_Piston);

}

// Called just before this Command runs the first time
void Piston_Extend::Initialize() {
    Robot::m_Piston->extend();

}

// Called repeatedly when this Command is scheduled to run
void Piston_Extend::Execute() {}

// Make this return true when this Command no longer needs to run execute()
bool Piston_Extend::IsFinished() {
   return true;
    }

// Called once after isFinished returns true
void Piston_Extend::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Piston_Extend::Interrupted() {}
