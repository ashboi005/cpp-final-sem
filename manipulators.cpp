#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

void main() {
    double pi = 3.14159;
    cout.setf(ios::fixed);              // Set fixed floating point
    cout.precision(2);                  // Set precision to 2 decimal places
    cout << "Pi: " << pi << endl;
    cout.width(10);                     // Set width for the next output
    cout << 123 << endl;                // Output with width set
    getch();                            // Wait for a key press
}