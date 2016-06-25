/*Intro C++ Exercise Sheet 1 Question 1*/
/*Author David Loughnane*/
/*Program last modified: October 22nd 2015*/

/*This program calculates the Fibonacci number of a given input*/

#include <iostream>
#include <cstdlib>
using namespace std;

/*Function which calculates the Fibonacci number corresponding to its argument*/
int fibonacci(int n);

/* MAIN PROGRAM */
int main () {

  int input;
  cout << "Enter a positive integer you would like to compute the fibonacci number of: " << endl;
  cin >> input;

  cout << "The " << input;

  if ((input % 10 == 1) && !(input == 11))
    cout << "st";
  else if ((input % 10 == 2) && !(input == 12))
    cout << "nd";
  else if ((input % 10 == 2) && !(input == 13))
    cout << "rd";
  else
    cout << "th";

  cout << " Fibonacci number is " << fibonacci(input) << "." << endl;

  return 0;
}
/* END OF MAIN PROGRAM */

/* FUNCTION DEFINITION OF FACTORIAL */
int fibonacci(int n) {
  if (n < 1) {
    cout << endl << endl << "Erro - non-positive argument to Fibonacci not allowed" << endl;
    exit(1);
  }
  else if (n == 1 || n == 2)
    return 1;
  else 
    return fibonacci(n - 1) + fibonacci(n - 2);
}
/*END OF FUNCTION*/
