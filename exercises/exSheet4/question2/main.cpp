#include <iostream>
#include <fstream>

using namespace std;

/*this is a comment that should not be output*/

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

    if (character == '/') {           /*if we reach a '/', we test if '*' follows immediatley for comment */
      
      input_file.get(character2);
      
      if (character2 != '*') {       /*if it is not the start of a  comment we put_back character2 to the input_file and continue*/
	input_file.putback(character2);
	cout << character;
	output_file.put(character);
	input_file.get(character);
      }
      else {                        /* if it is the start of the comment we continue until we reach a potential end of comment*/
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

  /*this is another comment that should not be output*/
  return 0;
}
