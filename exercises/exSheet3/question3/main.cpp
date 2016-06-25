#include <iostream>
#include <iomanip>
#include "statistics.h"

using namespace std; 
	

int main() {	

  int num_count, x1, x2, x3, x4;
  double avg= 0, std_dev = 0;

  cout << "This program tests the function in the 'statistics.h' header file" << endl;


  do {
    cout << "Do you wish to test 1, 2, 3, or 4 numbers (enter 0 to end program): " << endl;
    cin >> num_count;

    if ( num_count < 0 || num_count > 4 ) {
      cout << "Sorry, this program can only test 1, 2, 3, or 4 values." << endl << endl;
    }

    if (num_count >=1 && num_count < 5) {
      cout << "Enter first value: " << endl;
      cin >> x1;
    }
    if (num_count >=2 && num_count < 5) {
      cout << "Enter second value: " << endl;
      cin >> x2;
    }
    if (num_count >=3 && num_count < 5) {
      cout << "Enter third value: " << endl;
      cin >> x3;
    }
    if (num_count == 4) {
      cout << "Enter fourth value: " << endl;
      cin >> x4;
    }

    cout << endl;

    switch (num_count) {
    case 0: cout << "Exiting program on request" << endl;
      break;
    case 1: avg =x1;
      break;
    case 2: avg = average(x1, x2);
      std_dev= standard_deviation(x1,x2);
      break;
    case 3: avg = average(x1, x2, x3);
      std_dev = standard_deviation(x1,x2,x3);
      break;
    case 4: avg = average(x1, x2, x3, x4);
      std_dev = standard_deviation(x1,x2,x3,x4);
      break;
  }

    cout << "Average: " << avg << ". Standard deviation: " << std_dev << "." << endl << endl; 

  } while ( num_count != 0);


  cout << "Finished testing 'statistics.h' header file." << endl;

  return 0;
}


