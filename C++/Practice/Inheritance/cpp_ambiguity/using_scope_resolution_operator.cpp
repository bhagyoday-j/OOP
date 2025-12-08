#include <iostream>
using namespace std;

class A {
public:
  int a;
};

class B : public A {
public:
  int b;
};

class C : public A {
public:
  int c;
};

class D : public B, public C {
public:
  int c;
};

int main() {

  D obj;

  //obj.a = 5; // error
  obj.B :: a = 5;
  obj.C :: a = 10;

  cout << "a form class B : " << obj.B::a << endl;
  cout << "a form class C : " << obj.C::a << endl;

  return 0;
}