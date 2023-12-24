// Copyright 2023 bhipp
// test Employee classes
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<fstream>
using std::ifstream;
#include"employee.h"
using CSCE240_Employees::Employee;
#include"hourlyemployee.h"
using CSCE240_Employees::HourlyEmployee;
#include"salariedemployee.h"
using CSCE240_Employees::SalariedEmployee;

int main() {
  ifstream infile("someemployees.txt");
  int numrecords, payfreq, i = 0;
  string first, last, jobtitle, emptype;
  double salary, hourlyrate, hours;
  infile >> numrecords;
  Employee * * theemployees = new Employee * [numrecords];
  while ( i < numrecords && infile.good() ) {
    infile >> first >> last >> jobtitle >> payfreq >> emptype;
    if ( emptype == "hourly" ) {
      infile >> hourlyrate >> hours;
      theemployees[i] = new HourlyEmployee(first, last, jobtitle, payfreq,
                                           hourlyrate, hours);
    } else if ( emptype == "salaried" ) {
      infile >> salary;
      theemployees[i] = new SalariedEmployee(first, last, jobtitle,
                                             payfreq, salary);
    } else {
      theemployees[i] = new Employee(first, last, jobtitle, payfreq);
    }
    ++i;
  }
  for ( int j = 0; j < i; ++j ) {
    theemployees[j]->Print();
    cout << "Pay: $" << theemployees[j]->Pay() << endl;
    delete theemployees[j];
  }
  return 0;
}
