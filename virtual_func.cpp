#include <iostream.h>
#include <conio.h>

class Base {
public:
    virtual void display() { cout << "Base Display" << endl; }
};

class Derived : public Base {
public:
    void display() { cout << "Derived Display" << endl; }
};

void main() {
    clrscr();           //Note: Pointer is a special variable that stores an address (int* a)
    Base* b;         // Step 1: Declare a pointer of type Base
    Derived d;       // Step 2: Create an object of Derived class
    b = &d;          // Step 3: Point the Base pointer to the Derived object
    b->display();    // Step 4: Call the display function using the pointer

    Base obj;
    obj.display();
    getch();
}
