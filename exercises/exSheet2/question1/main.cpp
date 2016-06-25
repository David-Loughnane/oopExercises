#include <iostream>
#include <iomanip>

using namespace std;


int main () {

  cout << setiosflags(ios::left);
  cout.setf(ios::fixed);
  cout.precision(2);

  cout << setw(12) << "Fahrenheit" << setw(12) << "Celcius"
       << setw(12) << "Absolute Value" << endl  << endl;

  for (int i = 0; i <= 300; i += 20 ) {
    
    float f = (static_cast<float>(i) - 32) * 5 / 9;
    float k = static_cast<float>(i) + 273.15;

    cout << setw(12) << i << setw(12) << f 
	 << setw(12) << k << endl;   

  }

  return 0;
}


