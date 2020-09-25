/**
 * @file PidController.cpp
 * @brief This file contains definitions for the PidController Class.
 * @Created on: Sep 23, 2020
 * @cpoyright 2020
 * @copyright owner : Kushagra Agrawal, Sneha Nayak
 */

#include "../include/PidController.h"

PID::PidController::PidController() {
  Kp = 0;
  Ki = 0;
  Kd = 0;
  CumulativeError = 0;
  ControlError = 0;
}
/**
 * @brief This function sets the gain values for the PID controller and returns the gain values set by the user.
 * @param kp This is the proportional controller gain.
 * @param ki This is the integral controller gain.
 * @param kd This is the differential controller gain.
 * @return A double vector which contains the gain values set by the user.
 */
std::vector<double> PID::PidController::GainValues(double kp, double ki,
                                                   double kd) {
  Kp = kp;
  Ki = ki;
  Kd = kd;
  std::vector<double> Gain = { Kp, Ki, Kd };
  return Gain;
}
/**
 * @brief This function implements the error formula for the PID controller
 * for a given fixed point and the input. This is calculated at a particular
 * time instant. It outputs the new velocity and the control error.
 * @param TargetVelocity This is the target velocity to be tracked by the controller.
 * @param InputVelocity This is the input velocity.
 * @param PreviousError This is the error from the previous instance at which
 *                  PID controller error was calculated.
 * @return Control Error of data type double.
 */
double PID::PidController::ComputeError(double TargetVelocity,
                                        double InputVelocity,
                                        double PreviousError) {
  std::cout << "Implement Compute Error method.";
  return 0;
}
PID::PidController::~PidController() {
}
