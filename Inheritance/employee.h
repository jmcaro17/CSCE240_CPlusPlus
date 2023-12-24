// Copyright 2023 bhipp
// Define an Employee
#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include<string>
using std::string;

namespace CSCE240_Employees {

class Employee {
 public:
  explicit Employee(string f = "Jane", string l = "Doe", string job = "TBD",
                    int pay_periods = 52);
  virtual ~Employee();  // a.k.a. Caro's Fire function
  void SetFirst(string f);
  void SetLast(string l);
  void SetJobTitle(string job);
  void SetPayPeriods(int ppy);
  string GetFirst() const { return first_name_; }
  string GetLast() const { return last_name_; }
  string GetJobTitle() const { return job_title_; }
  int GetPayPeriods() const { return pay_periods_; }
  virtual void Print() const;
  // virtual functions must be implemented or made "pure virtual" by putting
  // = 0 on the end of the function prototype. If we make the function pure
  // virtual, our class becomes an abstract class and we can't instantiate
  // objects of that class type
  virtual double Pay() const { return 0; }

 private:
  string first_name_;
  string last_name_;
  string job_title_;
  int pay_periods_;
};  // Employee

}  // namespace CSCE240_Employees

#endif  // _EMPLOYEE_H_
