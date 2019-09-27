/**
 * @file test.cpp
 * @brief Provides testing cases for the Pid Class.
 *
 * @Copyright "Copyright 2019 <Corbyn Yhap>
 * @Copyright "Copyright 2019 <Charan Karthikeyan>
 */
#include <gtest/gtest.h>

#include "pid.hpp"

TEST(ValidatePIDClass, estimateVelocity) {
  Pid myPid(10, 5, 5);
  double expected = 850;
  EXPECT_EQ(expected, myPid.estimateVelocity(40, 20, 0.5));
}

TEST(ValidatePIDClass, TestPIDConstructor) {
  Pid myPid;
  EXPECT_EQ(myPid.getProportionalGain(), 0);
  EXPECT_EQ(myPid.getIntegralGain(), 0);
  EXPECT_EQ(myPid.getDifferentialGain(), 0);
}

TEST(ValidatePIDClass, TestPIDConstructor2) {
  Pid myPid(42, 234.7, 999.34);
  EXPECT_EQ(myPid.getProportionalGain(), 42);
  EXPECT_EQ(myPid.getIntegralGain(), 234.7);
  EXPECT_EQ(myPid.getDifferentialGain(), 999.34);
}
TEST(ValidatePIDClass, setProportionalGain) {
  Pid myPid;
  myPid.setProportionalGain(66.423);
  EXPECT_EQ(myPid.getProportionalGain(), 66.423);
}

TEST(ValidatePIDClass, setIntegralGain) {
  Pid myPid;
  myPid.setIntegralGain(856.3);
  EXPECT_EQ(myPid.getIntegralGain(), 856.3);
}

TEST(ValidatePIDClass, setDifferentialGain) {
  Pid myPid;
  myPid.setDifferentialGain(67.3);
  EXPECT_EQ(myPid.getDifferentialGain(), 67.3);
}
