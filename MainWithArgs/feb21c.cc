// Copyright 2023 Jesse Caro
// read all of the major assignment grades for a student's classes this semester
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int how_many_classes;
  double * * the_grades;
  int * num_grades_per_class;
  do {
    cout << "How many classes are you taking? ";
    cin >> how_many_classes;
  } while ( how_many_classes <= 0 );
  the_grades = new double * [how_many_classes];
  num_grades_per_class = new int [how_many_classes];
  if ( the_grades == nullptr || num_grades_per_class == nullptr ) {
    cout << "trouble!" << endl;
    return 0;
  }
  for ( int i = 0; i < how_many_classes; ++i ) {
    do {
      cout << "How many major assignments are there in class " << i + 1 << "? ";
      cin >> num_grades_per_class[i];
    } while ( num_grades_per_class[i] <= 0 );
    the_grades[i] = new double[num_grades_per_class[i]];
    if ( the_grades[i] == nullptr ) {
      cout << "couldn't do it.. sorry" << endl;
      return 0;
    }
    cout << "Enter the " << num_grades_per_class[i] << " grades: ";
    for ( int j = 0; j < num_grades_per_class[i]; ++j )
      cin >> the_grades[i][j];
  }
  for ( int which_class = 0; which_class < how_many_classes; ++which_class ) {
    cout << "Grades in class " << which_class + 1 << ": ";
    for ( int which_grade = 0; which_grade < num_grades_per_class[which_class];
                  ++which_grade ) {
      cout << the_grades[which_class][which_grade] << " ";
    }
    cout << endl;
  }

  // final housecleaning
  for ( int i = 0; i < how_many_classes; ++i )
    delete [] the_grades[i];
  delete [] the_grades;
  delete [] num_grades_per_class;
  
  return 0;
}
