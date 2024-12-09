//Write a program to create a class Box with fields for width, height, and depth.
//Initialize the data members using: Default Constructor, Parameterized Constructor, Copy Constructor
//Write a method to calculate the volume of the box, Implement a destructor to display a message when an object is destroyed

#include <iostream.h>
#include <conio.h>

class Box {
    int width, height, depth;

public:
    // Default Constructor
    Box() {
        width = 0;
        height = 0;
        depth = 0;
        cout << "Default constructor called!" << endl;
    }

    // Parameterized Constructor
    Box(int w, int h, int d) {
        width = w;
        height = h;
        depth = d;
        cout << "Parameterized constructor called!" << endl;
    }

    // Copy Constructor
    Box(const Box& b) {
        width = b.width;
        height = b.height;
        depth = b.depth;
        cout << "Copy constructor called!" << endl;
    }

    // Method to calculate volume
    int calculateVolume() {
        return width * height * depth;
    }

    // Destructor
    ~Box() {
        cout << "Destructor called for Box with dimensions: " << width << "x" << height << "x" << depth << endl;
    }
};

void main() {
    clrscr();

    Box defaultBox; // Calls default constructor
    Box paramBox(3, 4, 5); // Calls parameterized constructor
    Box copyBox(paramBox); // Calls copy constructor

    cout << "Volume of paramBox: " << paramBox.calculateVolume() << endl;
    cout << "Volume of copyBox: " << copyBox.calculateVolume() << endl;

    getch(); // Destructor will be automatically called here
}
