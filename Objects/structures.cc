// Copyright 2023 Jesse Caro
// Example structure type
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

struct Point {
  int x;
  int y;
};

int main() {
  Point my_point;
  cout << "Enter the x and y coordiante of a point ";
  cin >> my_point.x >> my_point.y;
  cout << "The point is (" << my_point.x << ", " << my_point.y << ")" << endl;
  Point some_points[5];
  cout << "Enter the coordinates for five points ";
  for ( int i = 0; i < 5; ++i )
    cin >> some_points[i].x >> some_points[i].y;
  for ( int i = 0; i < 5; ++i )
    cout << "(" << some_points[i].x << ", " << some_points[i].y << ")\n";
  
  Point * pointpointer = &my_point;
  cout << "Access a meber through a pointer, method 1: " << (*pointpointer).x
       << "\nAccess a member through a pointer, method 2: " << pointpointer->y
       << endl;
  return 0;
  return 0;
}
