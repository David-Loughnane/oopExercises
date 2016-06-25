#include <iostream>

using namespace std;


void prime_driver(int, int);
int prime_checker(int);


int main() {

  int range_start, range_end;
  cout << "Enter the min and max values you wish to test for primeness: " << endl;
  cin >> range_start >> range_end;

  prime_driver(range_start, range_end);

  return 0;
}


void prime_driver(int range_start, int range_end) {
  
  for (int i = range_start; i <= range_end; i++) {
    prime_checker(i);
  }
}


int  prime_checker(int candidate) {
  for (int i = 2; i < candidate; i++) {
    if ( (candidate %  i) == 0) {
      cout << candidate << " is not a prime number." << endl;
      return 0;
    }
  }
  cout << candidate << " is a prime number." << endl;
  return 0;
}



