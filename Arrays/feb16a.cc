// Copyright Jesse Caro
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

const int kCols = 5; // this variable has file scope

// function to print the values in a double-suscripted array of doubles
void Print(const double the_array[][kCols], int num_rows) {
  for ( int i = 0; i < num_rows; ++i ) {
    for ( int j = 0; j < kCols; ++j ) {
      cout << the_array[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  const int kRows = 6;
  double nums[kRows][kCols] = { {1.2, 3.7}, {5}, {-4.2, 1.75} };
  cout << nums[2][1] << endl;
  Print(nums, kRows);
  return 0;
}
