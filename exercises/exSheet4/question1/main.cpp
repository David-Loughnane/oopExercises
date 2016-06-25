#include <iostream>
#include <fstream>

using namespace std;


/*create a program which outputs its own source file to the screen*/

int main() {

  char character;

  ifstream in_stream;
  in_stream.open("main.cpp");
  in_stream.get(character);
  while(!in_stream.eof()) {
    cout << character;
    in_stream.get(character);
  }

  return 0;
}
