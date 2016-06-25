#include <iostream>

using namespace std;

enum Day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int closing_time(Day day_of_the_week);
void print_day(Day day_of_the_week, ostream& out_stream);

int main() {

  int count;

  cout.setf(ios::left);
  cout.width(17);
  cout << "DAY";
  cout << "CLOSING TIME" << endl << endl;

  for (count = static_cast<int>(Sun); count <= static_cast<int>(Sat); count++) {
    cout.width(19);
    print_day(static_cast<Day>(count), cout);
    cout << closing_time(static_cast<Day>(count)) << "pm" << endl;
  }
  return 0;
}


int closing_time(Day day_of_the_week) {
switch (day_of_the_week) {
  case Sun: return 1;
  case Wed: return 8;
  case Sat: return 5;
  default: return 6;
  }
}


void print_day(Day day_of_the_week, ostream& out_stream) {
  switch (day_of_the_week) {
    case Sun: out_stream << "Sunday"; break;
    case Mon: out_stream << "Monday"; break;
    case Tue: out_stream << "Tuesday"; break;
    case Wed: out_stream << "Wednesday"; break;
    case Thu: out_stream << "Thursday"; break;
    case Fri: out_stream << "Friday"; break;
    case Sat: out_stream << "Saturday"; break;
    default: out_stream << "ERROR!";
 }
}

