#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float sensor_reading() {
  return 20.0;
}

int main() {

  double total = 0.0;
  for (int n=1; n < 100000000; n++) {
    total += sensor_reading();
      if ((n%100000)==0){
	cout << setprecision(15) << total << "  ";;
	cout << setprecision(15) << total / n << endl;
      }
  }
  return 0;
}

