#include <iostream>
#include "IntegerArray.h"

using namespace std;


int main() {

  const int MAX = 100;
  int my_array[MAX], second_array[MAX];
  int input_size = 0;

  float array_std_dev = 0;

  cout << "Enter the size the input to the array you wish to input (MAX = " << MAX << "): " << endl;
  cin >> input_size;

  input_array(my_array, input_size);
  display_array(my_array, input_size);
  copy_array(second_array, my_array, input_size);
  display_array(second_array, input_size);

  array_std_dev = std_dev(my_array, input_size);
  cout << "The standard deviation of the array is " << array_std_dev << endl;
  
  return 0;
}
