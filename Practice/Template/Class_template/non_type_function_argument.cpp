#include<iostream>
using namespace std;

template <class T, int size>

class arr {
  T a[size];

public:
  void accept() {
    cout << "Enter :";
    
    for(int i = 0; i < size; i++) {
      cin >> a[i];
    }
  }

  void display() {
    for(int i = 0; i < size; i++) {
      cout << a[i] << "\t" ;
    }

    cout << endl;
  }
};

int main() {
  
  arr<int, 3> a1;

  a1.accept();
  a1.display();
  
  return 0;
}