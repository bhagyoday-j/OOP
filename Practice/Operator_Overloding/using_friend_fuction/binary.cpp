#include <iostream>
using namespace std;

class Add {
  int m;
  int n;

public:

  Add(int x, int y) {
    m = x;
    n = y;
  }

  void display() {
    cout << "m = " << m << "\tn = " << n << endl;
  }

  friend void operator + (Add& x, Add& y);
};

void operator +(Add& x, Add& y) {
  x.m = x.m + y.m;
  x.n = x.n + y.n;
}

int main() {
  Add obj1(10, 20);
  Add obj2(2, 3);

  obj1.display();
  obj2.display();

  obj1 + obj2;

  obj1.display();
  obj2.display();

  return 0;
}