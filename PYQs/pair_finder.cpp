//Write a program in C++ to read a list of 10 integer numbers
//and print all those numbers which have a pair of two digits (combined) in them.

#include <iostream.h>
#include <conio.h>

class FindPair {
    int arr[10];

public:
    void inputArray() {
        cout << "Enter 10 numbers: ";
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    void findNumbersWithPair(int pair) {
        cout << "Numbers containing the pair " << pair << ": ";
        for (int i = 0; i < 10; i++) {
            int num = arr[i];
            while (num >= 10) { // Check all pairs in the number
                if (num % 100 == pair) {
                    cout << arr[i] << " ";
                    break;
                }
                num /= 10; // Move to the next pair
            }
        }
        cout << endl;
    }
};

void main() {
    clrscr();
    FindPair obj;
    obj.inputArray();

    int pair;
    cout << "Enter the pair to search for: ";
    cin >> pair;

    obj.findNumbersWithPair(pair);
    getch();
}
