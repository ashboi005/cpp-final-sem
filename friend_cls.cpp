#include <iostream.h>
#include <conio.h>

class A {
private:
    int x;
public:
    A() {
        x = 5;
    }
    friend class B;

    void display1(){
        cout << "Value of x from class A: " << x << endl;
    }
};

class B {
public:
    void display2(A obj) {
        cout << "Value of x from class B: " << obj.x << endl;
    }
};

void main() {
    clrscr();
    A objA;
    B objB;
    objA.display1();
    objB.display2(objA);
    getch();
}
