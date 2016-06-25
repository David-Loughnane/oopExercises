#include <iostream>
#include <iomanip>
using namespace std;

double celcius_of(int);
double absolute_value_of(int);
void print_preliminary_message();
void input_table_specifications(int&, int&, int&);
void print_message_echoing_input(int, int, int);
void print_table(int, int, int);
	

int main() {	
  int lower = 0; /* the lowest Fahrenheit entry in the table */
  int upper = 0; /* the highest Fahrenheit entry in the table */
  int step = 1;  /* difference in Fahrenheit between entries */

  print_preliminary_message();
  input_table_specifications(lower, upper, step);
  print_message_echoing_input(lower, upper, step);
  print_table(lower, upper, step);

  return 0;
}


double celsius_of(int fahr){
  return (static_cast<double>(5)/9) * (fahr - 32);
}

double absolute_value_of(int fahr){
  return ((static_cast<double>(5)/9) * (fahr - 32)) + 273.15;
}

void print_preliminary_message() {
  cout << "This program prints out a conversion table of temperatures." << endl;
  cout << endl;
}

void input_table_specifications (int &lower, int &upper, int &step) {
  cout << "Enter the minimum (whole number) temperature you want in the table, in Fahrenheit: " 
       << endl;
  cin >> lower;
  cout << "Enter the maximum temperature you want in the table: " << endl;
  cin>> upper;
  cout << "Enter the temperature difference you want between table entries: " << endl;
  cin >> step;
}

void print_message_echoing_input(int lower, int upper, int step) {
  cout << "Temperature conversion table from " << lower << "Fahrenheit to " << upper 
       << " Fahrenheit, in steps of " << step << " Fahrenheit: " << endl;
}

void print_table(int low_temp, int high_temp, int temp_step) {
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
}
