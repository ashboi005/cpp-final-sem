//Dynamic Memory Allocation in Strings

#include <iostream.h>
#include <conio.h>
#include <string.h>

class DynamicString {
    char* str;  //is the same as saying char *str;

public:
    DynamicString(const char* input) {
        str = new char[strlen(input) + 1]; // Allocate memory dynamically
        strcpy(str, input); // Copy input string
    }

    void display() {
        cout << "String: " << str << endl;
    }

    ~DynamicString() {
        delete[] str; // Free allocated memory
        cout << "Memory deallocated for string." << endl;
    }
};

void main() {
    clrscr();
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);

    DynamicString obj(input);
    obj.display();

    getch();
}
