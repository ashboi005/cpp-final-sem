//Write a program in C++ to sort a list of elements.

#include <iostream.h>
#include <conio.h>

class Sorter {
    int arr[10], size;

public:
    void inputElements() {
        cout << "Enter the number of elements (max 10): ";
        cin >> size;
        if (size > 10 || size <= 0) {
            cout << "Invalid size!" << endl;
            return;
        }
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void sortElements() {
        // Simple Bubble Sort
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void displaySortedElements() {
        cout << "Sorted elements:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void main() {
    clrscr();
    Sorter obj;

    obj.inputElements();
    obj.sortElements();
    obj.displaySortedElements();

    getch();
}
