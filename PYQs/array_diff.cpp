//Difference b/w the largest and smallest element in an array

#include <iostream.h>
#include <conio.h>

class ArrayOperations {
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

    void displayDifference() {
        int largest = arr[0], smallest = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > largest) largest = arr[i];
            if (arr[i] < smallest) smallest = arr[i];
        }
        cout << "Difference between largest and smallest: " << largest - smallest << endl;
    }
};

void main() {
    clrscr();
    ArrayOperations arrayOps;
    arrayOps.inputArray();
    arrayOps.displayDifference();
    getch();
}
