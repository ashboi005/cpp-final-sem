//find all prime numbers up to a user-specified number

#include <iostream.h>
#include <conio.h>

class PrimeNumbers {
private:
    // Function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

public:
    // Function to find and display all prime numbers up to 'n'
    void findPrimes(int n) {
        cout << "Prime numbers up to " << n << " are: ";
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

void main() {
    clrscr();
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 2) {
        cout << "No prime numbers exist below 2." << endl;
    } else {
        PrimeNumbers obj;
        obj.findPrimes(number); // Find and display prime numbers
    }

    getch();
}
