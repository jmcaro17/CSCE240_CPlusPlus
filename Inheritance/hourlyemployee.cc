// Copyright 2023 bhipp
// Implement functionality of the HourlyEmployee class
#include"hourlyemployee.h"
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"employee.h"

namespace CSCE240_Employees {

HourlyEmployee::HourlyEmployee(string f, string l, string job, int pay_periods,
            double pay_rate, double worked) : Employee(f, l, job, pay_periods),
                                              hourly_rate_(7.25),
                                              hours_worked_(40) {
  SetHourlyRate(pay_rate);
  SetHoursWorked(worked);
}

HourlyEmployee::HourlyEmployee(const Employee& emp, double pay_rate,
                          double worked) : Employee(emp),
                                              hourly_rate_(7.25),
                                              hours_worked_(40) {
  SetHourlyRate(pay_rate);
  SetHoursWorked(worked);
}

void HourlyEmployee::SetHourlyRate(double pay_rate) {
  if ( pay_rate >= 7.25 )
    hourly_rate_ = pay_rate;
}

void HourlyEmployee::SetHoursWorked(double hours) {
  if ( hours >= 0 && hours <= 24 * 365 / GetPayPeriods() )
    hours_worked_ = hours;
}

void HourlyEmployee::Print() const {
  Employee::Print();   // to call the base class version of a redefined function
                       // baseclass::functioncall
  cout << "Hourly Rate: $" << hourly_rate_;
  cout << "\nHours Worked: " << hours_worked_ << endl;
}

// not dealing with overtime at the moment
double HourlyEmployee::Pay() const {
  return hourly_rate_ * hours_worked_;
}

}  // namespace CSCE240_Employees
