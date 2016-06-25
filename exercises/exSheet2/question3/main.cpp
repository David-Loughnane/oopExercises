#include <iostream>

using namespace std;

int main() {

  char user_input;
  cout << "Please enter a character" << endl;
  cin >> user_input;

  if (isalpha(user_input)){
    if (isupper(user_input)) {
	cout << "The lower case character corresponding to " 
	     << user_input << " is " << static_cast<char>(tolower(user_input)) << endl;
      }
      else {
	cout << "The lower upper  case character corresponding to " 
	     << user_input << " is " << static_cast<char>(toupper(user_input)) << endl;
      }
  }
  else cout << user_input  <<" is not a letter" << endl;

  return 0;
}
