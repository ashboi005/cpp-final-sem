//Write a program in C++ to count the number of digits of a given number.

#include <iostream.h>
#include <conio.h>

class DigitCounter {
public:
    int countDigits(int number) {
        int count = 0;

        // Handle case for 0
        if (number == 0) {
            return 1;
        }

        // Count digits
        while (number != 0) {
            number /= 10; // Remove the last digit
            count++;
        }
        return count;
    }
};

void main() {
    clrscr();
    int number;
    cout << "Enter a number: ";
    cin >> number;

    DigitCounter obj;
    int digitCount = obj.countDigits(abs(number)); // Handle negative numbers with abs()
    cout << "Number of digits: " << digitCount << endl;

    getch();
}
