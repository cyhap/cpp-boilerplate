/**
 * @file pid.hpp
 * @brief Defines a PID Controller that computes the new
 * velocity given a target setpoint and the actual velocity.
 * Uses gains set by user to design the PID controller.
 *
 * @Copyright "Copyright 2019 <Corbyn Yhap>
 * @Copyright "Copyright 2019 <Charan Karthikeyan>
 */
#pragma once

class Pid {
 public:
  /**

   * @brief Constructor for the PID Controller

   * @param None.

   * @return None.

   */
  Pid();

  /**

   * @brief Destructor for the PID Controller

   * @param None.

   * @return None.

   */
  ~Pid();

  /**

   * @brief Constructor for the PID Controller that also sets the gains.

   * @param Kp Proportional Gain of the Controller.

   * @param Ki Integral Gain of the Controller.

   * @param Kd Differential Gain of the Controller.

   * @return None.

   */
  Pid(double Kp, double Ki, double Kd);
  /**

   * @brief Function to get the Proportional Gain of the PID Controller.

   * @param None

   * @return Proportional Gain (Kp)

   */
  double getProportionalGain();

  /**

   * @brief Function to get the Integral Gain of the PID Controller.

   * @param None

   * @return Integral Gain (Ki)

   */
  double getIntegralGain();

  /**

   * @brief Function to get the Differential Gain of the PID Controller.

   * @param None

   * @return Differential Gain (Kd)

   */
  double getDifferentialGain();

  /**

   * @brief Function to set the Proportional Gain of the PID Controller.

   * @param Kp Proportional Gain Value

   * @return None.

   */
  void setProportionalGain(double Kp);

  /**

   * @brief Function to set the Integral Gain of the PID Controller.

   * @param Kp Integral Gain Value

   * @return None.

   */
  void setIntegralGain(double Ki);

  /**

   * @brief Function to set the Differential Gain of the PID Controller.

   * @param Kp Differential Gain Value

   * @return None.

   */
  void setDifferentialGain(double Kd);

  /**

   * @brief Estimate the velocity given a target velocity and actual velocity.

   * @param targetVelocity The desired velocity of the system
   Unit: meters/second
   * @param actualVelocity The systems instantaneous velocity currently
   Unit: meters/second

   * @param dt The time increment over which to estimate the new velocity.
   The default time increment is 0.1 seconds.
   Unit: seconds

   * @return The estimated velocity after the time interval.

   */
  double estimateVelocity(double targetVelocity, double actualVelocity,
                          double dt = 0.1);

 private:
  double Kp;
  double Ki;
  double Kd;
};
