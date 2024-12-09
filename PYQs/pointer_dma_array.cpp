//Write a program to declare an array at runtime, initialize it, and traverse it using pointers, all implemented within a class.
//Use exception handling to manage invalid array sizes.

#include <iostream.h>
#include <conio.h>

class DynamicArray {
    int* arr;     // Pointer for dynamic array
    int size;     // Size of the array

public:
    // Constructor
    DynamicArray() {
        arr = NULL;
        size = 0;
    }

    // Method to create the array dynamically
    void createArray() {
        cout << "Enter the size of the array: ";
        cin >> size;

        if (size <= 0) {
            throw "Invalid size! Size must be greater than 0."; // Throw an exception
        }

        arr = new int[size]; // Dynamically allocate memory
        cout << "Array of size " << size << " created successfully." << endl;
    }

    // Method to input elements into the array
    void inputElements() {
        if (arr == NULL) {
            cout << "Array not created yet!" << endl;
            return;
        }

        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Method to display the array elements using pointers
    void displayArray() {
        if (arr == NULL) {
            cout << "Array not created yet!" << endl;
            return;
        }

        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << *(arr + i) << " "; // Using pointer arithmetic
        }
        cout << endl;
    }

    // Destructor
    ~DynamicArray() {
        if (arr != NULL) {
            delete[] arr; // Free allocated memory
            cout << "Array memory deallocated." << endl;
        }
    }
};

void main() {
    clrscr();

    DynamicArray dynArray;

    try {
        dynArray.createArray();     // Create the array
        dynArray.inputElements();  // Input elements
        dynArray.displayArray();   // Display elements
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    getch();
}
