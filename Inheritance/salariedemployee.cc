// Copyright 2023 bhipp
// Implement the SalariedEmployee class functionality
#include"salariedemployee.h"
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;
#include"employee.h"

namespace CSCE240_Employees {

SalariedEmployee::SalariedEmployee(string f, string l,
                    string job, int pay_periods, double salary)
                    : Employee(f, l, job, pay_periods), annual_salary_(0) {
  SetSalary(salary);
}
  // constructor - create a SalariedEmployee from an existing
  //               Employee object
SalariedEmployee::SalariedEmployee(const Employee& emp, double salary)
                           : Employee(emp), annual_salary_(0) {
  SetSalary(salary);
}

void SalariedEmployee::SetSalary(double salary) {
  if ( salary > 0 )
    annual_salary_ = salary;
}

void SalariedEmployee::Print() const {
  Employee::Print();
  cout << "Annual Salary: $" << annual_salary_ << endl;
}

double SalariedEmployee::Pay() const {
  return annual_salary_ / GetPayPeriods();  // pay_periods_;
}

}  // namespace CSCE240_Employees
