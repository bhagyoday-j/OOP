#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    virtual void displayInfo() {}

    virtual ~Person() {}
};

// Derived class: Doctor
class Doctor : public Person {
    string specialization;

public:
    Doctor(string n, int a, string spec) : Person(n, a), specialization(spec) {}

    void displayInfo() {
        cout << "\n--- Doctor Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

// Derived class: Nurse
class Nurse : public Person {
    string department;

public:
    Nurse(string n, int a, string dept) : Person(n, a), department(dept) {}

    void displayInfo() {
        cout << "\n--- Nurse Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived class: Administrative Staff
class AdministrativeStaff : public Person {
    string position;

public:
    AdministrativeStaff(string n, int a, string pos) : Person(n, a), position(pos) {}

    void displayInfo() override {
        cout << "\n--- Administrative Staff Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Position: " << position << endl;
    }
};

int main() {
    
    Doctor d("Dr. Rajesh Sharma", 45, "Cardiologist");
    Nurse n("Nurse Anjali", 32, "Emergency");
    AdministrativeStaff a("Mr. Verma", 40, "Accounts Manager");

    Person* people[3];
    people[0] = &d;
    people[1] = &n;
    people[2] = &a;

    for (int i = 0; i < 3; i++) {
        people[i]->displayInfo();
    }

    return 0;
}

