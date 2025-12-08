// If you have to pass default argument, then you will have  to pass 
// default values for all the subsequent arguments (from right 
// to left).

#include <iostream>
using namespace std;

int sum(int a = 1, int b = 9, int c = 5) { 
  return a + b + c;
}

// int sum(int a, int b = 3, int c = 5) { 
//   return a + b + c;
// }

// int sum(int a, int b, int c = 2) { 
//   return a + b + c;
// }

// int sum(int a, int b, int c) { 
//   return a + b + c;
// }


int main() {

  cout << sum() << endl;
  cout << sum(1, 2, 3) << endl;
  cout << sum(2, 3) << endl;


  return 0;
}