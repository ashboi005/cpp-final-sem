//Reverse Array and Add Corresponding Values

#include <iostream.h>
#include <conio.h>

class ReverseArray {
    int arr[100], n;

public:
    void inputArray() {
        cout << "Enter the number of elements: ";
        cin >> n;
        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void reverseAndAdd() {
        int reversed[100];
        // Reverse the array
        for (int i = 0; i < n; i++) {
            reversed[i] = arr[n - i - 1];
        }

        // Add corresponding values
        cout << "Original + Reversed: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] + reversed[i] << " ";
        }
        cout << endl;
    }
};

void main() {
    clrscr();
    ReverseArray revArray;
    revArray.inputArray();
    revArray.reverseAndAdd();
    getch();
}
