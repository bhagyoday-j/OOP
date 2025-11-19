#include <iostream>
using namespace std;

template <class T>

void swap(T a, T b) {
  T temp = a;
  a = b;
  b = temp;

  cout << a << "\t" << b << endl;
}

int main() {

  swap(3, 5);
  swap("a", "b");
  swap(4.5, 6.8);

  return 0;
}