#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd)
{
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp_ = Kp;
  Ki_ = Ki;
  Kd_ = Kd;
  p_error_ = 0.0F;
  i_error_ = 0.0F;
  d_error_ = 0.0F;
}

void PID::UpdateError(double cte)
{
  /**
   * TODO: Update PID errors based on cte.
   */
}

double PID::TotalError()
{
  /**
   * TODO: Calculate and return the total error
   */
  return 0.0; // TODO: Add your total error calc here!
}