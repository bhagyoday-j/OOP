#include <iostream>
using namespace std;

class Shape { // Abstract class -> as it include pure virtual funtion
protected:
  float dimension;

public:
  void getDimension() {
    cout << "Enter dimention : ";
    cin >> dimension;
  }

  virtual float calculateArea() = 0; //pure virtual function
};

class Circle : public Shape {
public:
  float calculateArea() {

    return 3.14*dimension*dimension;
  }
};

class Square : public Shape {
public:
  float calculateArea() {

    return dimension*dimension;
  }
};

int main() {

  Square s;
  Circle c;

  cout << "Square" << endl;
  s.getDimension();
  cout << "Circle" << endl;
  c.getDimension();

  cout << "Area of Square : " << s.calculateArea() <<endl;
  cout << "Area of Circle : " << c.calculateArea() << endl;

  return 0;
}