#include <iostream>
using namespace std;

int sum(int a, int b) {
  return a + b;
}

int sum(int a, int b, int c) { // with different numbers of parameter
  return a + b + c;
}

double sum(double a, double b) { // with differnt data type of parmeter
  return a + b;
}

int main() {

  cout << sum(3, 3) << endl;
  cout << sum(1, 2, 3) << endl;
  cout << sum(2.1, 1.4) << endl;


  return 0;
}