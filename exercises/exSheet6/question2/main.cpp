#include <iostream>
#include "sort.h"

using namespace std;


int main() {

  const int MAX = 80;
  char my_string[MAX];
  
  cout << "Enter a string ( MAX length " << MAX << " ) for alphabetical sorting" << endl;
  cin.getline(my_string, MAX);

  selection_sort(my_string, MAX);
  
  cout << "Outputting the sorted string" << endl;
  for (int i = 0; i < MAX && my_string[i] != '\0' ; i++) {
      cout << my_string[i];
    }

  cout << endl;
 
  return 0;
}

