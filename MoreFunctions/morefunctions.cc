// Copyright 2023 Jesse Caro
#include"morefunctions.h"

void Swap( int& x, int& y ) {
  int temp = x;
  x = y;
  y = temp;
}

double Median(int x, int y) {
  return (x + y) / 2.0;
}

int Median(int x, int y, int z) {
  int small = x;
  if ( y < small )
    small = y;
  if ( z < small )
    small = z;
  int large = x;
  if ( y > large )
    large = y;
  if ( z > large )
    large = z;
  return x + y + z - large - small;
}
