// Scope Resolution Operator with Friend Function

#include <iostream.h>
#include <conio.h>

class A {
    int num;

public:
    A(int n) {
        num = n;
    }

    friend void display(const A& obj); // Friend function declaration
};

void display(const A& obj) { // Friend function definition
    cout << "The number is: " << obj.num << endl;
}

void main() {
    clrscr();
    A obj(10);
    display(obj);
    getch();
}
