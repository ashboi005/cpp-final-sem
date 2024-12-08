#include <iostream.h>
#include <conio.h>

// Template function
template <class T> // Changed typename to class for Turbo C++
T multiply(T a, T b) {
    return a * b;
}

void main() {
    clrscr(); // Clear the screen
    cout << "Int Multiply: " << multiply(2, 3) << endl;       // Multiply integers
    cout << "Float Multiply: " << multiply(2.5, 3.5) << endl; // Multiply floats
    getch(); // Wait for key press
}
