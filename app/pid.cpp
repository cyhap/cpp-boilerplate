/**
 * @file pid.cpp
 * @author Corbyn Yhap
 * @author Charan Karthikeyan
 * @brief Defines a PID Controller that computes the new
 * velocity given a target setpoint and the actual velocity.
 * Uses gains set by user to design the PID controller.
 *
 * @Copyright "Copyright 2019 <Corbyn Yhap>
 * @Copyright "Copyright 2019 <Charan Karthikeyan>
 */

#include "pid.hpp"

Pid::Pid()
    :
    Kp(0),
    Ki(0),
    Kd(0) {
}

Pid::~Pid() {
}

Pid::Pid(double Kp, double Ki, double Kd)
    :
    Kp(Kp),
    Ki(Ki),
    Kd(Kd) {
}

double Pid::getDifferentialGain() {
  // TODO(Team2) Return Member Variable
  return 0;
}

double Pid::getIntegralGain() {
  // TODO(Team2) Return Member Variable
  return 0;
}

double Pid::getProportionalGain() {
  // TODO(Team2) Return Member Variable
  return 0;
}

void Pid::setProportionalGain(double Kp) {
  // TODO(Team2) Set Member Variable
}

void Pid::setIntegralGain(double Ki) {
  // TODO(Team2) Set Member Variable
}

void Pid::setDifferentialGain(double Kd) {
  // TODO(Team2) Set Member Variable
}

double Pid::estimateVelocity(double targetVelocity, double actualVelocity,
                             double dt) {
  // TODO(Team2) Note dt value has a default argument defined in the header.
  // Add computation to compute the estimated velocity given provided info.
  return 0;
}
