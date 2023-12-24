// Copyright 2023 bhipp
// Define the HourlyEmployee class
#ifndef _HOURLY_EMPLOYEE_H_
#define _HOURLY_EMPLOYEE_H_

#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;
#include"employee.h"

namespace CSCE240_Employees {

class HourlyEmployee : public Employee {
 public:
  explicit HourlyEmployee(string f = "Jane", string l = "Doe",
                          string job = "TBD", int pay_periods = 52,
                          double pay_rate = 7.25, double worked = 40);
  // constructor to take a base class object and add on the necessary values
  // to create a derived class object
  explicit HourlyEmployee(const Employee&, double pay_rate = 7.25,
                          double worked = 40);
  virtual ~HourlyEmployee() { cout << "~HourlyEmployee() called on "
                                   << GetLast() << endl; }
  void SetHourlyRate(double pay_rate);
  void SetHoursWorked(double hours);
  double GetHourlyRate() const { return hourly_rate_; }
  double GetHoursWorked() const { return hours_worked_; }

  // redefine - function with the same prototype as function in the base class
  virtual void Print() const;  // if a function is virtual in the base class
                                // it will automatically be virtual in the
                                // derived class, but it's a good idea to
                                 // add the virtual keyword in the derived
                                  // class for clarity
  virtual double Pay() const;

 private:
  double hourly_rate_;
  double hours_worked_;
};

}  // namespace CSCE240_Employees

#endif   // _HOURLY_EMPLOYEE_H_
