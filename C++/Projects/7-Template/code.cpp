#include <iostream>
#include <vector>
#include <utility>

using namespace std;

template<class T>

T Min(vector<T>& v) {
  int n = v.size();
  T minimum = v[0];

  for(int i = 1; i < n; i++) {
    if(v[i] < minimum)
      minimum = v[i];
  }

  return minimum;
}

template<class T>

T Max(vector<T>& v) {
  int n = v.size();
  T maximum = v[0];

  for(int i = 1; i < n; i++) {
    if(v[i] > maximum)
      maximum = v[i];
  }

  return maximum;

}

template<class T>

void bubbleSort(vector<T>& v) {
  int n = v.size();
  if (n == 0) return;

  for(int i = 0; i < n - 1; i++) {
    for(int j = 1; j < n - i; j++) {
      if(v[j-1] > v[j])
        swap(v[j-1], v[j]);
    }
  }

  cout << "Bubble Sorted array : ";
  for(int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  cout << endl;
}
  
template<class T>

void selectionSort(vector<T> v) {
  int n = v.size();

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(v[i] > v[j])
        swap(v[i], v[j]);
    }
  }
  
  cout << "Selection Sorted array : ";
  for(int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  cout << endl;
}

/*

template <class T>

void insertionSort(vector<T> v) {
  int n = v.size();

  for()
}

*/

int main() {

  vector<int> vint = {9, 2, 3, 4, 5, 0, 7};
  vector<char> vchar = {'c', 'a', 't'};
  vector<float> vfloat = {3.7, 6, 0.8, 0.7};

  int minint = Min(vint);
  char minchar = Min(vchar);
  float minfloat = Min(vfloat);

  cout << "Minimum of int : " << minint << endl;
  cout << "Minimum of char : " << minchar << endl;
  cout << "Minimum of float : " << minfloat << endl;

  cout << endl;

  cout << "Maximum of int : " << Max(vint) << endl;
  cout << "Maximum of float : " << Max(vfloat) << endl;
  cout << "Maximum of char : " << Max(vchar) << endl;

  cout << endl;

  bubbleSort(vint);
  bubbleSort(vchar);
  bubbleSort(vfloat);

  cout << endl;

  selectionSort(vint);
  selectionSort(vchar);
  selectionSort(vfloat);

  cout << endl;

  return 0;
}