//Virtual and Pure Virtual Functions

#include <iostream.h>
#include <conio.h>

class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base class show function" << endl;
    }

    virtual void pureFunc() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void show() { // Override virtual function
        cout << "Derived class show function" << endl;
    }

    void pureFunc() { // Must override pure virtual function
        cout << "Derived class pure function implementation" << endl;
    }
};

void main() {
    clrscr();
    Base* bPtr;
    Derived d;
    bPtr = &d;

    bPtr->show();      // Calls overridden function in Derived
    bPtr->pureFunc();  // Calls Derived implementation of pure virtual function
    getch();
}
