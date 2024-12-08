#include <iostream.h>
#include <conio.h>

void display(int num) {
    cout << "Integer: " << num << endl;
}

void display(float num) {
    cout << "Float: " << num << endl;
}

void main() {
    clrscr();
    display(5);
    display(3.14f);
    getch();
}
