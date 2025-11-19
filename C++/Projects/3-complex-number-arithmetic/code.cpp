#include <iostream>
using namespace std;

class Complex {
  float ral, imag;
public:
  Complex() {
    ral = 0;
    imag = 0;
  }

  Complex(float r, float i) {
    ral = r;
    imag = i;
  }

  void display() {
    if(imag < 0)
      cout << ral << " - " << -imag << "i" << endl;
    else
      cout << ral << " + " << imag << "i" << endl;
  }

  Complex operator+(Complex &x);
  Complex operator-(Complex &x);
  Complex operator*(Complex &x);
  Complex operator/(Complex &x);
};

Complex Complex::operator+(Complex &x) {
  return Complex(ral + x.ral, imag + x.imag);
}

Complex Complex::operator-(Complex &x) {
  return Complex(ral - x.ral, imag - x.imag);
}

Complex Complex::operator*(Complex &x) {
  float r = ral*x.ral - (imag*x.imag);
  float i = ral*x.imag + imag*x.ral; 

  return Complex(r, i);
}

Complex Complex::operator/(Complex &x) {
  float r = (ral*x.ral - (imag*x.imag))/(x.ral*x.ral + x.imag*x.imag);
  float i = (ral*x.imag + imag*x.ral)/(x.ral*x.ral + x.imag*x.imag);

  return Complex(r, i);
}

int main() {  

  float a, b , x, y;

  cout << "Enter c1 = a + bi and c2 = x + yi : " << endl;
  cout << "Enter a : ";
  cin >> a;
  cout << "Enter b : ";
  cin >> b;
  cout << "Enter x : ";
  cin >> x;
  cout << "Enter y : ";
  cin >> y;

  cout << endl;

  Complex c1(a, b);
  Complex c2(x, y);

  cout << "c1 = ";
  c1.display();
  cout << "c2 = ";
  c2.display();

  cout << "Arithmatic on above :" <<endl <<endl;

  Complex c3 = c1+c2;
  Complex c4 = c1-c2;
  Complex c5 = c1*c2;
  Complex c6 = c1/c2;
  
  cout << "c1 + c2 = ";
  c3.display(); //display addition
  cout << "c1 - c2 = ";
  c4.display(); //display substraction
  cout << "c1 * c2 = ";
  c5.display(); //display multiplication 
  cout << "c1 / c2 = ";
  c6.display(); //display division


  return 0;
}