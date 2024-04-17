#include <iostream>
using namespace std;

void f(int arr[]) {
  cout << sizeof(arr) << endl;
}

void f2(int arr[10])
{
  cout << sizeof(arr) << endl;
}

int main () {
  int A[10];
  cout <<"Size of A in main: " << sizeof(A) << endl;
  cout << "Size of A in f: ";
  f(A);
  cout << "Size of A in f2: ";
  f2(A);
  return 0;
}