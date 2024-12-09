//Write a program to remove all spaces in a sentence without using any inbuilt string handling function.

#include <iostream.h>
#include <conio.h>

class RemoveSpaces {
    char str[100];

public:
    void inputString() {
        cout << "Enter a sentence: ";
        cin.getline(str, 100);
    }

    void removeSpaces() {
        int i = 0, j = 0;
        while (str[i] != '\0') {
            if (str[i] != ' ') { // Copy non-space characters
                str[j++] = str[i];
            }
            i++;
        }
        str[j] = '\0'; // Null-terminate the modified string
    }

    void displayResult() {
        cout << "String without spaces: " << str << endl;
    }
};

void main() {
    clrscr();
    RemoveSpaces obj;
    obj.inputString();
    obj.removeSpaces();
    obj.displayResult();
    getch();
}
