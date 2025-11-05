#include <iostream>
using namespace std;

class Test {
public:
  Test() {
    cout << "Constructor" << endl;
  }

  ~Test() {
    cout << "Destructor" << endl;
  }
};

int main() {
  try {
    char a = 'b';
    // int a = 10;
    // float b = 20.5;

    Test t1;
    throw a; // Throwing char
  } catch (int i) {
    cout << "Caught int: " << i << endl;
  } catch (float f) {
    cout << "Caught float: " << f << endl;
  } catch (char c) {
    cout << "Caught char: " << c << endl;
  }

  cout << "Program continues after catch..." << endl;
  return 0;
}
