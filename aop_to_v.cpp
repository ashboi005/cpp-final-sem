#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();
    int a = 10, b = 20, c = 30;
    int *arr[3] = {&a, &b, &c}; // Array of pointers

    for (int i = 0; i < 3; i++) {
        cout << "Value at arr[" << i << "]: " << *arr[i] << endl;
    }
    getch();
}
