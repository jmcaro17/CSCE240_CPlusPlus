// Copyright 2023 Jesse Caro
// double-subscripted character array vs. array of pointer to characters
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  const int kWords = 5;
  const char * words[kWords] = {"Hi", "Hello", "What's up dawg?",
                     "How are you doing?", "Yo" };
  for ( int i = 0; i < kWords; ++i )
    cout << words[i] << endl;
  return 0;
}
