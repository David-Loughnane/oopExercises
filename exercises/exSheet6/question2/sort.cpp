#include <iostream>
#include "sort.h"

using namespace std;


void selection_sort(char a[], int length) {
  for (int count = 0; count < length -1 && a[count] != '\0' ; count++)
    swap(a[count], a[min_from(a, count, length)]);
}


int min_from(char a[], int position, int length) {
  int min_index = position;
  for (int count = position; count < length && a[count] != '\0' ; count ++) {
    if (a[count] < a[min_index])
      min_index = count;
  }
  return min_index;
}

void swap(char& first, char& second) {
    char temp = first;
    first = second;
    second = temp;
  }
