#include <cmath>
using namespace std;


double average(double x1, double x2) {
  return (x1 + x2)/2;
}

double average(double x1, double x2, double x3) {
  return (x1 + x2 + x3)/3;
}

double average(double x1, double x2, double x3, double x4) {
  return (x1 + x2 + x3 + x4)/4;
}


double standard_deviation(double x1, double x2) {
  double avg = average(x1, x2);
  double variance = average( pow((x1-avg),2), pow((x2-avg),2) );
  return sqrt(variance);
}

double standard_deviation(double x1, double x2, double x3) {
  double avg = average(x1, x2, x3);
  double variance = average( pow((x1-avg),2), pow((x2-avg),2), pow((x3-avg),2) );
  return sqrt(variance);
}


double standard_deviation(double x1, double x2, double x3, double x4) {
  double avg = average(x1, x2, x3, x4);
  double variance = average( pow((x1-avg),2), pow((x2-avg),2), pow((x3-avg),2), pow((x4-avg),2) );
  return sqrt(variance);
}

 
