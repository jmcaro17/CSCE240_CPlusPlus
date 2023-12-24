// Copyright Jesse Caro
// multi-subscripted array examples
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<iomanip>
using std::setw;

int main() {
  const int kRows = 5;
  const int kCols = 7;
  int big_array[kRows][kCols] = { {3, 7, 1}, {2, -4}, {8, 10, 15, 9} };
  for ( int r = 0; r < kRows; ++r ) {
    for ( int c = 0; c < kCols; ++c ) {
      cout << setw(4) << big_array[r][c];
    }
    cout << endl;
  }
  cout << big_array[2][3] << endl; // (2 * 7) + 3
  cout << big_array[0][17] << endl; // this accesses the same element as above
  
  for ( int position = 0; position < kRows * kCols; ++position ) {
    cout << setw(4) << big_array[0][position]
         << ((position + 1) %  7 == 0 ? '\n' : "");
  }

  const int kDepth = 3;
  int bigger_array[kDepth][kRows][kCols] = { {{4}}, {{3,4}, {1,7}} };
  for ( int d = 0; d < kDepth; ++d ) {
    for ( int r = 0; r < kRows; ++r ) {
      for ( int c = 0; c < kCols; ++c ) {
        cout << setw(4) << bigger_array[d][r][c];
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
