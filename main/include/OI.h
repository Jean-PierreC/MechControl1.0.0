/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "frc/WPILib.h"
#include "frc/Joystick.h"

#include "ctre/Phoenix.h"


class OI {

private:
  frc::Joystick* leftJoy;
  frc::Joystick* rightJoy;


 public:
 frc::Joystick* getLeft();
 frc::Joystick* getRight();
  OI();
};
