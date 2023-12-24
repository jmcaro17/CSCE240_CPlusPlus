// Copyright 2023 Jesse Caro
// my reusable functions!!!

//          PROJECT_PATH_FILENAME_H
#ifndef _MYFUNCTIONS_H_
#define _MYFUNCTIONS_H_

// factorial function - prototype
int Factorial(int);

// greatest common divisor function - prototype
int GCD(int, int);
// int GCD(int&, int&);
// This allows the function to modify the variables in the main
// Doesn't use references like in uncommented line
// Also makes it so that you cant send the function numbers, only variables

// Quadratic Formula : ax^2 + bx + c
// (-b +- sqrt(b^2 - 4ac)) / 2a
// precondition: function will be sent the coefficient of a, b, and c
//               and two double variables to hold the resulting
//               roots of the quadratic
// postcondition: the function will return true if the quadratic has real
//                roots, and modifies the fourth and fith variables to
//                hold these values. it will return false if the quadratic
//                has no real roots, and will leave the fourth and fifth
//                arguments unchanged
bool QuadraticFormula(double a, double b, double c, double& root1,
                      double & root);

// function that computes the mean (average) of two doubles
double Mean(double, double);
// function that computes the mean of three doubles
double Mean(double, double, double);
// function that computes the mean of two characters
char Mean(char, char);

// function to find the average of 5 required test grades
double  TestAverage(double = 0, double = 0, double = 0, double = 0, double = 0);

//recursive function - a function that calls itself
// Fibonacci sequence - 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
int Fibonacci(int n);

#endif  // _MYFUNCTIONS_H
