#include <iostream>
using namespace std;

class A {
public:
  int a;
};

class B : virtual public A {
public:
  int b;
};

class C : virtual public A {
public:
  int c;
};

class D : public B, public C {
public:
  int c;
};

int main() {

  D obj;

  obj.a = 5; 
  // obj.B :: a = 5;
  // obj.C :: a = 10;

  // cout << "a form class B : " << obj.B::a << endl;
  // cout << "a form class C : " << obj.C::a << endl;
  
  cout << "a = " << obj.a << endl;

  return 0;
}