#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();
    int *arr = new int[3]; // Allocate memory dynamically
    for (int i = 0; i < 3; i++) {
        arr[i] = (i + 1) * 10; // Initialize array elements
    }
    cout << "Dynamically allocated array: ";
    for (i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr; // Free memory
    getch();
}
