#include<iostream>
using namespace std;

template <class T>

void display(T x) {
  cout << "Template display :" << x << endl;
}

void display(int x) {
  cout << "Explicit display :" << x << endl;
}

int main() {
  display(5);
  display("Hello");
  display(4.4);
  
  return 0;
}