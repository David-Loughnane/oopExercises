#include <iostream>
#include <iomanip>

using namespace std;


int main () {

  int high_temp, low_temp, temp_step;

  cout << "What is the highest temperature you want?" << endl;
  cin >> high_temp;
  cout << "What is the lowest temperature you want?" << endl;
  cin >> low_temp;
  cout << "By how much do you wish to increment the temperature?" << endl;
  cin >> temp_step;

  cout << setiosflags(ios::left);
  cout.setf(ios::fixed);
  cout.precision(2);

  cout << setw(12) << "Fahrenheit" << setw(12) << "Celcius"
       << setw(12) << "Absolute Value" << endl  << endl;

  for (int i = low_temp; i <= high_temp; i += temp_step ) {
    
    float f = (static_cast<float>(i) - 32) * 5 / 9;
    float k = static_cast<float>(i) + 273.15;

    cout << setw(12) << i << setw(12) << f 
	 << setw(12) << k << endl;   

  }

  return 0;
}


