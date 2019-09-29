/**
 * @file test.cpp
 * @author Corbyn Yhap
 * @author Charan Karthikeyan
 * @brief Provides testing cases for the Pid Class.
 *
 * @Copyright "Copyright 2019 <Corbyn Yhap>
 * @Copyright "Copyright 2019 <Charan Karthikeyan>
 */
#include <gtest/gtest.h>

#include "pid.hpp"
/**
 * @brief Runs and tests estimate velocity function for certain inputs
 *
 */
TEST(ValidatePIDClass, estimateVelocity) {
  Pid myPid(10, 5, 5);
  EXPECT_EQ(450, myPid.estimateVelocity(40, 20, 0.5));
}

/**
 * @brief Runs and tests Default Constructor for PID
 *
 */
TEST(ValidatePIDClass, TestPIDConstructor) {
  Pid myPid;
  EXPECT_EQ(myPid.getProportionalGain(), 0);
  EXPECT_EQ(myPid.getIntegralGain(), 0);
  EXPECT_EQ(myPid.getDifferentialGain(), 0);
}

/**
 * @brief Runs and tests Alternative Constructor for PID
 * This constructor allows the PID Gains to be set.
 *
 */
TEST(ValidatePIDClass, TestPIDConstructor2) {
  Pid myPid(42, 234.7, 999.34);
  EXPECT_EQ(myPid.getProportionalGain(), 42);
  EXPECT_EQ(myPid.getIntegralGain(), 234.7);
  EXPECT_EQ(myPid.getDifferentialGain(), 999.34);
}

/**
 * @brief Runs and tests getter and setter of Proportional Gain
 * function for certain inputs
 *
 */
TEST(ValidatePIDClass, setProportionalGain) {
  Pid myPid;
  myPid.setProportionalGain(66.423);
  EXPECT_EQ(myPid.getProportionalGain(), 66.423);
}

/**
 * @brief Runs and tests getter and setter of Integral Gain
 * function for certain inputs
 *
 */
TEST(ValidatePIDClass, setIntegralGain) {
  Pid myPid;
  myPid.setIntegralGain(856.3);
  EXPECT_EQ(myPid.getIntegralGain(), 856.3);
}

/**
 * @brief Runs and tests getter and setter of Differential Gain
 * function for certain inputs
 *
 */
TEST(ValidatePIDClass, setDifferentialGain) {
  Pid myPid;
  myPid.setDifferentialGain(67.3);
  EXPECT_EQ(myPid.getDifferentialGain(), 67.3);
}
