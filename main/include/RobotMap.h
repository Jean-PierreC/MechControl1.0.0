/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int kLeftMotor = 1;
// constexpr int kRightMotor = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int kRangeFinderPort = 1;
constexpr int SERVO_PORT = 8;
//PCM_TALON_ID, PISTON_FORWARD_CHANNEL, PISTON_REVERSE_CHANNEL
constexpr int PCM_TALON_ID = 0;
constexpr int PISTON_FORWARD_CHANNEL = 0;
constexpr int PISTON_REVERSE_CHANNEL = 1;
constexpr int SuperPortRightTalon= 2;
constexpr int SuperPortLeftTalon= 3;
constexpr int COMPRESSOR_PORT = 5;

