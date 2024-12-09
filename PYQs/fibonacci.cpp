#include <iostream.h>
#include <conio.h>

// Class to calculate Fibonacci series
class Fibonacci {
    int num; // Number of terms

public:
    void getNumber() {
        cout << "Enter the number of terms: ";
        cin >> num;
    }

    void displaySeries() {
        int a = 0, b = 1, next;
        cout << "Fibonacci Series: ";
        for (int i = 1; i <= num; i++) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }
};

void main() {
    clrscr();
    Fibonacci fib; // Create an object of the Fibonacci class
    fib.getNumber();
    fib.displaySeries();
    getch();
}
