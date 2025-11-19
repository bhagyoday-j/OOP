#include <iostream>
using namespace std;

template <class T>

class Add {
  T num1;
  T num2;

public:
  void add() {
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2 : ";
    cin >> num2;

    cout << "num1 + num2 = " << num1 + num2 << endl;
  }
};


int main() {
  Add<int> a;
  Add<char> b;

  a.add();
  b.add();

  return 0;
}