// Copyright 2023 bhipp
// Define the SalariedEmployee class
#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_

#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;
#include"employee.h"
namespace CSCE240_Employees {

class SalariedEmployee : public Employee {
 public:
  // constructor - with all individual data members
  explicit SalariedEmployee(string f = "Jane", string l = "Doe",
                    string job = "TBD",
                    int pay_periods = 52, double salary = 0);
  // constructor - create a SalariedEmployee from an existing
  //               Employee object
  explicit SalariedEmployee(const Employee& emp, double salary = 0);
  virtual ~SalariedEmployee() { cout << "~SalariedEmployee() called for "
                                     << GetLast() << endl; }
  // accessor
  double GetSalary() const { return annual_salary_; }
  // mutator
  void SetSalary(double s);
  // redefine the Print function
  virtual void Print() const;
  // Pay function
  virtual double Pay() const;
 private:
  double annual_salary_;
};  // SalariedEmployee

}  // namespace CSCE240_Employees

#endif  // _SALARIED_EMPLOYEE_H_
