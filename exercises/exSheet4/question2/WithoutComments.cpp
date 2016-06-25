#include <iostream>
#include <fstream>

using namespace std;

*

int main() {

  cout << "Testing : " << 16/2 << " = " << 4/2 << endl << endl;

  char character, character2;

  ifstream input_file;
  input_file.open("main.cpp");

  ofstream output_file;
  output_file.open("WithoutComments.cpp");

  input_file.get(character);
  while (!input_file.eof()) {
    cout << character;
    output_file.put(character);
    input_file.get(character);

    if (character == '/') {           **
      
      input_file.get(character2);
      
      if (character2 != '*') {       *
	input_file.putback(character2);
	cout << character;
	output_file.put(character);
	input_file.get(character);
      }
      else {                        *
	while(character != '*') {

	  input_file.get(character);	
	  if (character == '*') {
	    input_file.get(character2);
	    if (character2 != '/') {
	      input_file.putback(character2);
	      cout << character;
	      output_file.put(character);
	      input_file.get(character);
	    }
	  }
	}
      }
    }
  }

  *
  return 0;
}
