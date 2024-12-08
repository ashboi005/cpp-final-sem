#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        cout << *ptr << " "; // Access array elements using pointer
        ptr++; // Move to next element
    }
    getch();
}
