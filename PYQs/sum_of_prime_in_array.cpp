//Write a program in C++ to read 10 numbers using an array and print the sum of all the prime numbers in it.

#include <iostream.h>
#include <conio.h>

class PrimeSumCalculator {
    int arr[10];

    // Function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false; // Numbers <= 1 are not prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

public:
    // Function to input numbers into the array
    void inputNumbers() {
        cout << "Enter 10 numbers:" << endl;
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    // Function to calculate and return the sum of prime numbers
    int calculatePrimeSum() {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            if (isPrime(arr[i])) {
                sum += arr[i];
            }
        }
        return sum;
    }
};

void main() {
    clrscr();
    PrimeSumCalculator obj;

    obj.inputNumbers(); // Input 10 numbers
    int primeSum = obj.calculatePrimeSum(); // Calculate sum of prime numbers

    cout << "Sum of prime numbers: " << primeSum << endl;

    getch();
}
