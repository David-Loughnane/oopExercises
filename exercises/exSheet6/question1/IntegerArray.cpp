#include <iostream>
#include <cmath>

using namespace std;


void input_array(int a[],int length) {
  cout << "Enter " << length << " values to be stored in the array: " << endl;
  for (int i = 0; i < length; i++)
    cin >> a[i];
}


void display_array(int a[], int length) {
  for (int i = 0; i < length; i++)
    cout << "Element number " << i+1 << " contains the value " << a[i] << endl;
  cout << endl;
}


void copy_array(int a[], int b[], int length) {
  cout << "We are now copying the elements of the second array to the first" << endl;
  for (int i = 0; i < length; i++)
    a[i] = b[i];
  cout << endl;
}


double average(int a[], int length) {
  double total = 0;
  for (int i =0; i < length; i++)
    total += a[i];
  return (total/length);
}


double std_dev(int a[], int length) {
  double variance = 0;
  double x_bar = average(a, length);
  for (int i = 0; i < length; i++)
	    variance += pow((a[i] - x_bar),2);
  variance /= length;
  return sqrt(variance);
}

