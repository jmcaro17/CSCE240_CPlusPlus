// Copyright 2023 Jesse Caro
// Introduction to Arrays in C++
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<iomanip>

// function to output the values in an array of doubles to the
// standard output device
void PrintArray(const double numbers[], int size) {
  cout << std::setiosflags( std::ios::fixed | std::ios::showpoint );
  for ( int i = 0; i < size; ++i )
    cout << std::setw(10) << numbers[i];
  cout << endl;
}

// Linear Search
int LinearSearch(const double numbers[], int size, double search_value) {
  int found_position = -1; // -1 means it hasn't been found
  int i = 0;
  while ( found_position == -1 && i < size )
    found_position = (numbers[i++] == search_value ? i : -1);
  return found_position;
}

int main() {
  const int kSize = 8; // We'' declare and initialize constant variables
                       // for our array sizes to allow for easier code
                       // maintenance (update the size in one spot)
  // We can initalize the values when we declare the aray in a comma-
  // seperated list {}. If there are fewer values in the list than the
  // size of the array, remaining elements will be initalized to 0 for
  // numeric arrays
  double some_numbers[kSize] = { 2.3, 9.5, 0.008 };
  PrintArray(some_numbers, kSize);
  double lookin4;
  cout << "What are you looking for? ";
  cin >> lookin4;
  cout << LinearSearch(some_numbers, kSize, lookin4) << endl;

  // c-string
  char word[] = "Hello";  // {'H', 'e', 'l', 'l', 'o' '\0' };
  cout << word;
  int i = 0;
  while ( word[i] != '\0' )
    cout << word[i++];

  const double some_consts[] = { 3.14, 2.718, 1.45 };
  // declares and initalizes array of size 3
  PrintArray(some_consts, 3); // the array paramater must be const in
                              // order for this call to compile
  // below declares and initalizes an array of size 3
  // double some_numbers[kSize] = { 2.3, 9.5, 0.008 };
  for ( int i = 0; i < kSize; ++i )
    cout << some_numbers[i] << " ";
  cout << endl;
  cout << some_numbers << endl;
  return 0;
}
