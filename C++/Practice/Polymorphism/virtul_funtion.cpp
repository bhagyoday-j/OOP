#include <iostream>
using namespace std;

class A {
public:

  virtual void show() {
    cout<<"Content of base class." << endl;
  }
};

class B : public A {
public:

  void show() { //Function Overriding ->Runtime polymorphism
    cout<<"Content of derived class." << endl;
  }
};

int main() {

  A b, *ptr; //Base class pointer
  B d;

  ptr = &b;
  ptr -> show();  //Dynamic Binding Occurs

  ptr = &d;
  ptr -> show();  //Dynamic Binding Occurs

  return 0;
}