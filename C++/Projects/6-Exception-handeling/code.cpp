#include <iostream>
using namespace std;

class Television {
private:
    int model;
    int screen;
    float price;

public:
    Television() {
        model = 0;
        screen = 0;
        price = 0.0;
    }

    friend void operator>>(istream&, Television&);
    friend void operator<<(ostream&, Television&);
};

void operator>>(istream &din, Television &tv) {
    try {
        cout << "Enter Model Number: ";
        din >> tv.model;

        cout << "Enter Screen Size (in inches): ";
        din >> tv.screen;

        cout << "Enter Price: ";
        din >> tv.price;

        if (tv.model > 9999 || tv.screen < 12 || tv.screen > 70 || tv.price < 0 || tv.price > 50000) {
            throw 1;
        }

        cout << "\nAll values are correct!" << endl;
    }
    catch(int) {
        cout << "\nInvalid input detected. Resetting all values to zero!" << endl;
        tv.model = 0;
        tv.screen = 0;
        tv.price = 0.0;
    }
}

void operator<<(ostream &dout, Television &tv) {
    dout << "\nTelevision Details:\n";
    dout << "Model Number : " << tv.model << endl;
    dout << "Screen Size  : " << tv.screen << " inches" << endl;
    dout << "Price        : " << tv.price << endl;
}

int main() {
    Television tv;

    cin >> tv;
    cout << tv;

    return 0;
}
