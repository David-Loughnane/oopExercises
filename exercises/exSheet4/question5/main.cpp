#include <iostream>
#include <fstream>

using namespace std;

int main() {

  char character;
  int integer;
  ofstream out_stream;
  ifstream in_stream;

  out_stream.open("Integers");
  out_stream << 123 << ' ' << 456;
  out_stream.close();

  in_stream.open("Integers");
 
  in_stream >> character >> integer;
  cout << "character: " << character << endl;
  cout << "integer: " << integer << endl;

  in_stream >> character >> integer;
  cout << "character: " << character << endl;
  cout << "integer: " << integer << endl;

  in_stream.close();

  return 0;
}
