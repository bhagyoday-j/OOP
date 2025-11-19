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
    cout <<"m = " << m << "   n = " << n <<endl;
  }

  void operator +(Add &x);
};

void Add:: operator +(Add &x) {
  m = m + x.m;
  n = n + x.n;
}

int main() {

  Add obj1(10, 20);
  Add obj2(5, 10);

  obj1.display();
  obj2.display();

  obj1+obj2;
  
  obj1.display();
  obj2.display();

  return 0;
}