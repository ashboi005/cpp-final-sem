#include <iostream.h>
#include <conio.h>
#include <string.h>

class Car {
public:
    char brand[20];  // Using character array instead of string
    int year;        // Property

    void display() { // Method
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

void main() {
    clrscr();       // Clear the screen
    Car car1;       // Object creation
    strcpy(car1.brand, "Toyota");
    car1.year = 2020;
    car1.display(); // Calling method
    getch();        // Wait for a key press
}