//Write a program in C++ to copy a string by overloading < operator

#include <iostream.h>
#include <conio.h>
#include <string.h>

class StringCopy {
    char str[100];

public:
    StringCopy(const char* input = "") { // Constructor
        strcpy(str, input);
    }

    // Overload < operator for copying strings
    void operator<(StringCopy& source) {
        strcpy(str, source.str); // Copy string
    }

    void display() {
        cout << "String: " << str << endl;
    }
};

void main() {
    clrscr();
    StringCopy source("Hello, World!"), destination;

    cout << "Source string before copy: ";
    source.display();

    cout << "Destination string before copy: ";
    destination.display();

    destination < source; // Copy string using overloaded < operator

    cout << "Destination string after copy: ";
    destination.display();

    getch();
}
