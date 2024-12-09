//Program to Demonstrate & (Address of) and * (Indirection) Operators

#include <iostream.h>
#include <conio.h>

class PointerExample {
    int arr[3] = {10, 20, 30};
    int *ptr; // Pointer to an array

public:
    void demonstratePointerToArray() {
        ptr = arr; // Points to the first element of the array
        cout << "Pointer to an array: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Element " << i << ": " << *(ptr + i) << " (Address: " << (ptr + i) << ")" << endl;
        }
    }

    void demonstrateArrayOfPointers() {
        int *arrOfPtrs[3]; // Array of pointers
        for (int i = 0; i < 3; i++) {
            arrOfPtrs[i] = &arr[i]; // Each pointer points to an element in the array
        }

        cout << "\nArray of pointers: " << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Pointer " << i << ": " << *(arrOfPtrs[i]) << " (Address: " << arrOfPtrs[i] << ")" << endl;
        }
    }
};

void main() {
    clrscr();
    PointerExample obj;
    obj.demonstratePointerToArray();
    obj.demonstrateArrayOfPointers();
    getch();
}
