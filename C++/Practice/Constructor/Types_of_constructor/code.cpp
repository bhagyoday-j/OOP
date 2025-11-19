#include <iostream>
using namespace std;

class Student {
  int rollNo;
  float marks;

public:

  Student() { // Default constructor
    rollNo = 0;
    marks = 0.0;
  }

  Student(int a, float b) { //Parameterized Constructor
    rollNo = a;
    marks = b;
  }

  Student(Student &s) { //Copy constructor
    rollNo = s.rollNo;
    marks = s.marks;
  }

  void display() {
    cout << rollNo << "\t" << marks << endl;
  }
};
 
int main() {

  Student s1;  // default constructor called
  Student s2(5, 100); //Parameterized Constructor called
  Student s3(s2); //Copy constructor called

  s1.display() ;
  s2.display() ;
  s3.display() ;

  return 0;
}