#include <iostream.h>
#include <conio.h>

class SwapExample {
public:
    // Pass by Value
    void swapByValue(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        cout << "Inside swapByValue - a: " << a << ", b: " << b << endl;
    }

    // Pass by Pointer
    void swapByPointer(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    // Pass by Reference
    void swapByReference(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

void main() {
    clrscr();
    SwapExample swapper;
    int a = 10, b = 20;

    cout << "Original values - a: " << a << ", b: " << b << endl;

    // Pass by Value
    swapper.swapByValue(a, b);
    cout << "After swapByValue - a: " << a << ", b: " << b << endl;

    // Pass by Pointer
    swapper.swapByPointer(&a, &b);
    cout << "After swapByPointer - a: " << a << ", b: " << b << endl;

    // Pass by Reference
    swapper.swapByReference(a, b);
    cout << "After swapByReference - a: " << a << ", b: " << b << endl;

    getch();
}
