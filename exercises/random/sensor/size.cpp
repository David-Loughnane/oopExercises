#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
  //besides for char (one byte) none of the other fundamental data types has a standard size specified
  
  // 1 byte  = 8 bit  = 2^8  = 256 values
  // 2 bytes = 16 bit = 2^16 = ~65k values
  // 4 bytes = 32 bit = 2^32 = ~4B values
  // 8 bytes = 64 bit = 2^64 = ~18BB values

  //for floating point types, the size affects their precision, by having more or less bits for their significant and exponent
  //float
  //double - precision not less than float
  //long double - precision not less than double

  cout << "Min value for float: " << numeric_limits<float>::min() << endl;
  cout << "Min value for double: " << numeric_limits<double>::min() << endl;
  cout << "Min value for long double: " << numeric_limits<long double>::min() << endl;
  cout << "Max value for float: " << numeric_limits<float>::max() << endl;
  cout << "Max value for double: " <<  numeric_limits<double>::max() << endl;
  cout << "Max value for long double: " << numeric_limits<long double>::max() << endl;  
 }

