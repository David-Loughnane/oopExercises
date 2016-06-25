#include <iostream>

using namespace std;

int main() {

  int x, n, result= 1;

  cout << "What base do you want to use?" << endl;
  cin >> x;
  cout << "What exponent do you want to use" << endl;
  cin >> n;

  for (int i = 0; i < n; i++) {
    result *= x;
  }

  cout << result << endl;

  return 0;
}
