#include <iostream>
using namespace std;

template <class T1, class T2>

class A {
  T1 a;
  T2 b;

public:
  A(T1 x, T2 y) {
    a = x;
    b = y;
  }

  void display() {
    cout << "a = " << a << "  b = " << b << endl;
  }
};

int main() {
  A<int, char> x(3, 'a');
  x.display();
  
  return 0;
}