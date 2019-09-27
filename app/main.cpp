/**
 * @file main.cpp
 * @brief Provides an example of using the Pid Class
 *
 * @Copyright "Copyright 2019 <Corbyn Yhap>
 * @Copyright "Copyright 2019 <Charan Karthikeyan>
 */
#include <iostream>
#include "pid.hpp"

int main() {
  Pid myPid(10, 5, 5);
  std::cout << "This is the estimated velocity computed by the PID: "
            << myPid.estimateVelocity(40, 20, 0.5) << std::endl;
  std::cout << "This was the expected value: 850" << std::endl;
  return 0;
}
