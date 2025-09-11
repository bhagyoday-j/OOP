#include <iostream>
using namespace std;

inline int square(int a) {
  return a*a;
}

int main() {
  int a;
  cout << "Enter a : ";
  cin >> a;

  cout << "Square of " << a << " is :" << square(a) << endl;
  return 0;
}