#include<iostream>
using namespace std;

template <class T1, class T2>

void display(T1 x, T2 y) {
  cout << x << "\t" << y << endl;
}

int main() {
  display(4, "abc");
  
  return 0;
}