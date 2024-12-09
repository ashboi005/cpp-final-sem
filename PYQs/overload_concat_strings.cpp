//Concatenate two strings by overloading + operator

#include <iostream.h>
#include <conio.h>
#include <string.h>

class StringConcat {
    char str[100];

public:
    StringConcat(const char* input = "") { // Constructor
        strcpy(str, input);
    }

    // Overload + operator for concatenating strings
    StringConcat operator+(StringConcat& obj) {
        StringConcat temp;
        strcpy(temp.str, str); // Copy first string
        strcat(temp.str, obj.str); // Concatenate second string
        return temp;
    }

    void display() {
        cout << "String: " << str << endl;
    }
};

void main() {
    clrscr();
    StringConcat str1("Hello, "), str2("World!"), result;

    cout << "First string: ";
    str1.display();

    cout << "Second string: ";
    str2.display();

    result = str1 + str2; // Concatenate strings using overloaded + operator

    cout << "Concatenated string: ";
    result.display();

    getch();
}
