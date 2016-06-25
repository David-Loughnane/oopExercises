#include <iostream>
#include <fstream>

using namespace std;

int main() {

  char character;
  int count = 0;

  ifstream input_stream;
  input_stream.open("main.cpp");


  while (!input_stream.eof()) {
    input_stream.get(character);
    count++;
  }
  input_stream.close();
  cout << count;

 
  for (int i = count ; i > 0 ; i--) {
    input_stream.open("main.cpp");
    for (int j = 1; j <= i ; j++) {
      input_stream.get(character);
      if (i == j) {
	cout << character;
      }
    }
    input_stream.close();      
  }

  return 0;
}
