#include <iostream.h>
#include <conio.h>

class Example {
private:
    int x; // Private member
public:
    void setX(int val)  // Public method to set the value of x
    {
        x = val;

    }
    int getX()  // Public method to get the value of x
    {
        return x;

    }
};

void main() {
    clrscr();        // Clear the screen for a clean start
    Example obj;     // Create an object of the class Example
    obj.setX(123);   // Set the private member x to 123 via public setter method
    cout << "The value of x is: " << obj.getX() << endl; // Output the value of x via public getter method
    getch();         // Wait for a key press before closing the program
}
