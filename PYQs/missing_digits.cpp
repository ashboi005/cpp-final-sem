//Write a program in C++ to read a string and print all the digits which do not appear in the string. The input string contains numeric digits only from 0 to 9.

#include <iostream.h>
#include <conio.h>
#include <string.h>

class MissingDigits {
    char input[100]; // Input string
    bool digitPresent[10]; // To track digits from 0 to 9

public:
    void readInput() {
        cout << "Enter a numeric string containing digits (0-9): ";
        cin >> input;
    }

    void findMissingDigits() {
        // Initialize all digits as not present
        for (int i = 0; i < 10; i++) {
            digitPresent[i] = false;
        }

        // Mark digits present in the input string
        for (int i = 0; i < strlen(input); i++) {
            if (input[i] >= '0' && input[i] <= '9') { // Ensure it's a valid digit
                digitPresent[input[i] - '0'] = true; // Mark as present
            }
        }

        // Display the missing digits
        cout << "Digits not present in the string: ";
        for (int i = 0; i < 10; i++) {
            if (!digitPresent[i]) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

void main() {
    clrscr();
    MissingDigits obj;

    obj.readInput();      // Read the input string
    obj.findMissingDigits(); // Find and display missing digits

    getch();
}
