#include <iostream>
using namespace std;

class Increment {
  int m,n;
public:
  Increment(int x, int y){
    m=x;
    n=y;
  }

  void display() {
    cout << "m = " << m << ", n = " << n << endl;
  }

  void operator++() { // Prefix increment
    ++m;
    ++n;
  }
};

int main() {

  Increment in1(20,19);
  Increment in2(10,9);

  in1.display();

  ++in1;//1st way
  in1.display();

  in2.display();

  in2.operator++();//2nd way
  in2.display();

  return 0;
}