#include <iostream>

using namespace std;

void no_repetitions(char a[]);
void shuffle_up(char a[], int start);


int main() {

  const int MAX = 80;
  char mystring[MAX];

  cout << "Enter a string you want to remove duplicate characters from: " << endl;
  cin.getline(mystring, MAX);

  no_repetitions(mystring);

  cout << mystring << endl;

  return 0;
}


void no_repetitions(char a[]) {
  for (int i = 0; a[i] != '\0'; i++) {
    for (int j = i+1; a[j] != '\0'; j++) {
      if ( a[i] == a[j] )
	shuffle_up(a, j);
    }
  }
}

void shuffle_up(char a[], int start) {
  for (int k = start; a[k] != '\0'; k++) 
	  a[k] = a[k+1];
}
