#include <iostream>
#include <fstream>

using namespace std;

int main() {

  char character;
  int count = 0;

  ifstream input_stream;
  input_stream.open("main.cpp");
  
  while(!input_stream.eof()) {
    count++;
    input_stream.get(character);
    cout << character;
  }
  
  cout << endl << endl << "The number of characters in the source file is " << count << "." << endl;

  return 0;
}
