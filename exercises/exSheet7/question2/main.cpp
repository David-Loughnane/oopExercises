#include <iostream>

using namespace std;


const int MAX = 10;
enum Logical {False, True};

//returns True if a < b
Logical is_smaller(char a[], char b[]);

Logical is_smaller_ptr(char *a, char *b);

int main() {

  char string1[MAX], string2[MAX];

  cout << "Enter the first string: " << endl;
  cin.getline(string1, MAX);
  cout << "Enter the second string: " << endl;
  cin.getline(string2, MAX);

  if (is_smaller(string1, string2)) 
    cout << "The first string is smaller than than the second." << endl; 
  else
    cout << "The first string is not smaller than the first." << endl;

  cout << endl;

  if (is_smaller_ptr(string1, string2)) 
    cout << "The first string is smaller than than the second." << endl; 
  else
    cout << "The first string is not smaller than the first." << endl;

  return 0;
}


Logical is_smaller(char a[], char b[]) {
  int count = 0;
  while (a[count] != '\0' && b[count] != '\0') {
    if (a[count] < b[count])
      return True;
    if (a[count] > b[count])
      return False;
    count++;
  }
  if (a[count] == '\0' && b[count] != '\0')
    return True;
  else
    return False;
}


Logical is_smaller_ptr(char *a, char *b) {
  while(*a != '\0' && *b != '\0') {
    if (*a < *b)
      return True;
    if (*a > *b)
      return False;
    a++;
    b++;
  }
  if (*a == '\0' && *b != '\0')
    return True;
  else 
    return False;
}
