#include <iostream>
using namespace std;

typedef int *IntPtrType;//declare user defined type which is a pointer to a int

int main() {

  IntPtrType ptrA, ptrB, *ptrC; //declare 3 variables of pointer to int, one pointer to a pointer
  
  ptrA = new int; //initalise ptrA with the address of memory allocated on the heap for an integer type
  *ptrA = 3;//intalise the memory in the heap, at the address stored in ptrA, with the value 3
  ptrB = ptrA;//intialise the value of ptrB with the memory address stored in ptrA
  cout << *ptrA << " " << *ptrB << endl; //output the values stored in the memory address referenced by ptrA and ptrB

  // 3 3

  ptrB = new int; //intialise ptrB with the memory address of memory allocated on the heap for an integer type
  *ptrB = 9; // initalise the memory in the heap, at teh address pointed to by ptrB, with the value 9
  cout << *ptrA << " " << *ptrB << endl;

  // 3 9

  *ptrB = *ptrA; // the value referenced by ptrB is set to the value referenced by ptrA
  cout << *ptrA << " " << *ptrB << endl;

  // 3 3

  delete ptrA; // deallocate the memory pointed to by ptrA
  ptrA = ptrB; // assign ptrA the value stored in ptrB
  cout << *ptrA << " " << *&*&*&*&ptrB << endl;

  // 3 heap_address

  ptrC = &ptrA; // ptrC is assinged the stack address of ptrA
  cout << *ptrC << " " << **ptrC << endl;

  // stack_address 3
 
  delete ptrA; // deallocate the memory pointer to byt ptrA
  ptrA = NULL; // set the value of ptrA to null

  cout << endl << endl <<  endl;
  cout << &ptrA << " " << &ptrB << " " << &ptrC << endl;

  // stack_address stack_address stack_address

  return 0;
}


