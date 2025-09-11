#include <iostream>
using namespace std;

class Student {
  int rollNo;
  float marks;

public:

  Student() {
    rollNo = 0;
    marks = 0.0;
  }

  void display() {
    cout << rollNo << "\t" << marks << endl;
  }

  ~ Student() {  //Destructor
    cout << "Desturctor is called" << endl;
  }
};
 
int main() {

  Student s1; //implicit call
  Student s2 = Student(); //Explicit call

  s1.display();
  s2.display();

  return 0;
}