#include <iostream>
#include <iomanip>

using namespace std;


int main() {

  int height;
  cout << "Enter the height of the pyramid you wish to create: " << endl;
  cin >> height;
  
  for (int i = 0; i <= height; i += 2) {
    
    cout << setw(height+4) << right << string( (i/2)+1,'*');
    cout << setw(height+4) << left <<string( (i/2)+1,'*') << endl;

    }

  return 0;
}
