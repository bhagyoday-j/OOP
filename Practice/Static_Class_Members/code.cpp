#include <iostream>
using namespace std;

class Test {
  int code;
  static int count;//Static data member

public:

  void set() {
    code = ++count;
  }

  void show() {
    cout << "Object number :" << code << endl;
  }

  static void showCount() {//Static member function
    cout << "Count :" << count << endl;
  }
};

int Test::count;//Static data member Initialize outside the class

int main() {

  Test t1,t2,t3;

  t1.set();
  Test::showCount();

  t2.set();
  Test::showCount();

  t3.set();
  Test::showCount();

  t1.show();
  t2.show();
  t3.show();

  return 0;
}