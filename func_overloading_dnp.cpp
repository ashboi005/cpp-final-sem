#include <iostream.h>
#include <conio.h>

void add(int a, int b) {
    cout << "Sum of two integers: " << a + b << endl;
}

void add(int a, int b, int c) {
    cout << "Sum of three integers: " << a + b + c << endl;
}

void main() {
    clrscr();
    add(3, 5);
    add(3, 5, 7);
    getch();
}
