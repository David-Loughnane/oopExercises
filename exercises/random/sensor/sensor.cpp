#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float sensor_reading() {
  return 20.0;
}

int main() {

  cout.precision(15);

  double total = 0.0;
  for (int n=1; n < 100000000; n++) {
    total += sensor_reading();
    if ((n % 100000) ==0) {
      float average = total/n;
      cout << setw(15) << "the average of" << setw(15) << n << " readings is " << average << endl;
      cout << "the value of total is now " << total << endl << endl;
      if (average > 20.1)
	cout << "#FREEZER ON" << endl;
      if (average < 19.9) 
	cout << "#HEATER ON" << endl;
    }
  }
  return 0;
}

