#include <iostream.h>
#include <conio.h>

class A {
private:
    int x;
public:
    A(int val) {
        x = val;
    }
    friend void display(A);
    ~A() {
        cout << "Destructor called for x = " << x << endl;
    }
};

void display(A obj) {
    cout << "Value of x: " << obj.x << endl;
}

void main() {
    clrscr();
    A obj1(10), obj2(20);
    display(obj1);
    display(obj2);
    getch();
}
