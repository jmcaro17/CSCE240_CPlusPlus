// Copyright 2023 Jesse Caro
// some useful template functions
#ifndef _MY_TEMPLATE_FUNCTIONS_H_
#define _MY_TEMPLATE_FUNCTIONS_H_

namespace csce240_template_functions {

template<class T>
void SwapValues(T& x, T& y) {
  T temp = x;
  x = y;
  y = temp;
}

// our quick sort function
template<class T>
void QuickSort(T the_array[], int bottom, int top) {
  if ( bottom >= top ) return;
  int findbigger = bottom + 1, findsmaller = top;
  while ( findbigger < findsmaller ) {
    while ( findbigger < top && the_array[findbigger] <= the_array[bottom] )
      ++findbigger;
    while ( findsmaller > bottom &&
            the_array[findsmaller] >= the_array[bottom] )
      --findsmaller;
    if ( findbigger < findsmaller )
      SwapValues(the_array[findbigger], the_array[findsmaller]);
  }
  if ( the_array[bottom] > the_array[findsmaller] )
    SwapValues(the_array[bottom], the_array[findsmaller]);
  QuickSort(the_array, bottom, findsmaller - 1);
  QuickSort(the_array, findsmaller + 1, top);
}

}  // csce240_template_functions

#endif  // _MY_TEMPLATE_FUNCTIONS_H_
