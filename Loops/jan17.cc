// Copyright 2023 bhipp
// Decisions, Case, Loops
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int i = 1;
  while ( i <= 10 ) {
    cout << i << " ";
    ++i;
  }
  cout << endl;
  
  for ( int j = 1, k = 2; j <= 10; ++j, ++k )
    cout << j << " ";
  cout << endl;
  
  return 0;
}

/*


int main() {
  char language;
  do {
    cout << "(E)nglish, (S)panish, (F)rench ";
    cin >> language;
  } while ( language != 'F' && language != 'f' && language != 'S' &&
            language != 's' && language != 'E' && language != 'e' );
    while ( language != 'F' && language != 'f' && language != 'S' &&
            language != 's' && language != 'E' && language != 'e' ) {
      cout << Try again dude";
      cin >> language;
    }

  switch ( language ) {
    case 'E':
    case 'e':
      cout << "Hello\n";
      break;
    case 'S':
    case 's':
      cout << "Hola\n";
      break;
    case 'F':
    case 'f':
      cout << "Salut\n";
      break;
    default:
      cout << "Invalid entry\n";
  }
}


int main() {
  double grade;
  cout << "Enter your numeric grade: ";
  cin >> grade;
  if ( grade >= 59.5 )
    cout << "You passed\n";
  else
    cout << "You didn't pass\n";
  
  // logical expression ? true side : false side
  cout << "You " << (grade >= 59.5 ? "passed" : "didn't pass") << endl;
  
  int tickets;
  cout << "Howmany tickets would yoy like? ";
  cin >> tickets;
  cout << "You purchased " << tickets << "ticket" << (tickets==1 ? "" : "s");
  
  return 0;
}
*/
