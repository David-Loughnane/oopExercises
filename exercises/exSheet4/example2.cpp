#include <iostream>
#include <fstream>

using namespace std;


void copy_to(ifstream& in, ofstream& out);


int main() {
  ifstream in_stream;
  ofstream out_stream;

  in_stream.open("Lecture_4");
  out_stream.open("Copy_of_4");

  copy_to(in_stream, out_stream);

  out_stream.close();
  in_stream.close();

  return 0;
}


void copy_to(ifstream& in, ofstream& out) {
  char character;

  in.get(character);
  while(!in.eof()) {
    cout << character;
    out.put(character);
    in.get(character);
  }
}

