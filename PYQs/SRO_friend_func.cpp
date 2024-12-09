#include <iostream.h>
#include <conio.h>

class A {
    int num;

public:
    A(int n) { // Constructor to initialize num
        num = n;
    }

    friend void display(const A& obj); // Friend function declaration

    void show(); // Member function declaration
};

// Friend function definition (friend functions are not part of the class scope)
void display(const A& obj) {
    cout << "Friend Function - The number is: " << obj.num << endl;
}

// Member function definition using the scope resolution operator (::)
void A::show() {
    cout << "Member Function - The number is: " << num << endl;
}

void main() {
    clrscr();
    A obj(10);

    // Calling the friend function
    display(obj);

    // Calling the member function
    obj.show();

    getch();
}
