//Default and Parameterized Constructors in Inheritance

#include <iostream.h>
#include <conio.h>

class Base {
protected:
    int baseValue;

public:
    // Default constructor
    Base() {
        baseValue = 0;
        cout << "Base class default constructor called!" << endl;
    }

    // Parameterized constructor
    Base(int val) {
        baseValue = val;
        cout << "Base class parameterized constructor called!" << endl;
    }
};

class Derived : public Base {
    int derivedValue;

public:
    // Default constructor
    Derived() : Base() {
        derivedValue = 0;
        cout << "Derived class default constructor called!" << endl;
    }

    // Parameterized constructor
    Derived(int baseVal, int derivedVal) : Base(baseVal) {
        derivedValue = derivedVal;
        cout << "Derived class parameterized constructor called!" << endl;
    }

    void display() {
        cout << "Base Value: " << baseValue << ", Derived Value: " << derivedValue << endl;
    }
};

void main() {
    clrscr();
    Derived obj1;                // Calls default constructors
    Derived obj2(10, 20);        // Calls parameterized constructors
    obj2.display();
    getch();
}
