#include <iostream>
using namespace std;

class Increament {
  int m;
  int n;
public:
  Increament(int a, int b) {
    m = a; n = b;
  }

  void display() {
    cout << "m = " << m << ", n = " << n << endl;
  }

  friend void operator ++(Increament &);
};

void operator ++(Increament& x) {
  ++x.m;
  ++x.n;
}

int main() {

  Increament in1(20, 30);
  in1.display();
  operator ++(in1); // 1st way
  in1.display();

  return 0;
}