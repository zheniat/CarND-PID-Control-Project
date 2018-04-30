#include "PID.h"

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd, std::string pid_name) {
    this->pid_name = pid_name;
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
    
    d_error = 0.0;
    p_error = 0.0;
    i_error = 0.0;
}

void PID::UpdateError(double cte) {
    d_error = cte - p_error;
    p_error = cte;
    i_error += cte;
}

double PID::TotalError() {
    std::cout << pid_name<<" parameter has been tuned " << Kp << "," << Kd << "," << Ki << std::endl;
    return -Kp * p_error - Ki * i_error - Kd * d_error;
}
