#include <iostream>
using namespace std;

const int M = 2;
const int N = 2;
const int R = 2;

void matrix_mult(int a[][N], int b[][R], int answer [][R], int a_rows);
int entry_for_row_and_column(int row, int column, int a[][N], int b[][R]);
void input_N_column_matrix(int a[][N], int a_rows);
void input_R_column_matrix(int a[][R], int a_rows);
void display_N_column_matrix(int a[][N], int a_rows);
void display_R_column_matrix(int a[][R], int a_rows);


int main() {

  int a[M][N];
  int b[N][R];
  int answer[M][R];

  cout << "Input first (" << M << "x" << N << ") matrix:" << endl;
  input_N_column_matrix(a, M);
  cout << "Input second (" << N << "x" << R << ") matrix:" << endl;
  input_R_column_matrix(b, N);

  matrix_mult(a, b, answer, M);

  cout << endl;
  display_N_column_matrix(a, M);
  cout << "times" << endl;
  display_R_column_matrix(b, N);
  cout << "equals" << endl;
  display_R_column_matrix(answer, M);

  return 0;
}


void input_N_column_matrix(int a[][N], int a_rows) {
  for (int row = 0; row < a_rows; row++) {
    cout << "Type in " << N << " values for row " << row + 1 << " seperated by spaces: ";
    for (int column = 0; column < N; column++)
      cin >> a[row][column];
  }
}


void input_R_column_matrix(int a[][R], int a_rows) {
  for (int row = 0; row < a_rows; row++) {
    cout << "Type in " << R << " values for row " << row + 1 << " seperated by spaces: ";
    for (int column = 0; column < R ; column++) {
      cin >> a[row][column];
    }
  }
}


void matrix_mult(int a[][N], int b[][R], int answer[][R], int a_rows) {
  for (int row = 0; row < a_rows; row++) {
    for (int column = 0; column < R; column++) {
	answer[row][column] = entry_for_row_and_column(row, column, a, b);
      }
  }
}


int entry_for_row_and_column(int row, int column, int a[][N], int b[][R]) {
  int total = 0;
  for (int count = 0; count < N; count++) {
    total += a[row][count] * b[count][column];
  }
  return total;
}


void display_N_column_matrix(int a[][N], int a_rows) {
  for (int row = 0; row < a_rows; row++) {
    cout << string(10,' ');
    for (int column = 0; column < N; column++) {
      cout.width(5);
      cout << a[row][column] << " ";
    }
    cout << endl;
  }
}


void display_R_column_matrix(int a[][R], int a_rows) {
  for (int row = 0; row < a_rows; row++) {
    cout << string(10,' ');
    for (int column = 0; column < R; column++) {
      cout.width(5);
      cout << a[row][column] << " ";
    }
    cout << endl;
  }
}
