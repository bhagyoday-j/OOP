#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter values of a & b: ";
    cin >> a >> b;

    int x = a - b;

    try {
        if (x != 0) {
            cout << "Result (a/x) = " << a / x << endl;
        } else {
            throw(x);  // Throw exception if x == 0
        }
    } 
    catch (int i) {
        cout << "Exception caught: x = " << i << endl;
    }

    cout << "Program ended." << endl;
    return 0;
}
