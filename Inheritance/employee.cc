// Copyright 2023 bhipp
// Implement Employee class functionality
#include"employee.h"
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;

namespace CSCE240_Employees {

Employee::Employee(string f, string l, string job, int pay_periods) :
  first_name_("Jane"), last_name_("Doe"), job_title_("TBD"), pay_periods_(52) {
  SetFirst(f);
  SetLast(l);
  SetJobTitle(job);
  SetPayPeriods(pay_periods);
}

Employee::~Employee() {
  cout << "I'm sorry, " << first_name_
       << " but we're going to have to let you go." << endl;
}

void Employee::SetFirst(string f) {
  if ( f.length() > 0 )
    first_name_ = f;
}

void Employee::SetLast(string l) {
  if ( l.length() > 0 )
    last_name_ = l;
}
void Employee::SetJobTitle(string job) {
  if ( job.length() > 0 )
    job_title_ = job;
}

void Employee::SetPayPeriods(int ppy) {
  if ( ppy == 12 || ppy == 24 || ppy == 26 || ppy == 52 || ppy == 365 )
    pay_periods_ = ppy;
}

void Employee::Print() const {
  cout << "Employee Name: " << first_name_ << " " << last_name_
       << "\nJob Title: " << job_title_
       << "\nPay Periods Per Year: " << pay_periods_ << endl;
}

}  // namespace CSCE240_Employees
