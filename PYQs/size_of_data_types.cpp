#include <iostream.h>
#include <conio.h>

class DataTypeSizes {
public:
    void displaySizes() {
        cout << "Size of int: " << sizeof(int) << " bytes" << endl;
        cout << "Size of float: " << sizeof(float) << " bytes" << endl;
        cout << "Size of double: " << sizeof(double) << " bytes" << endl;
        cout << "Size of char: " << sizeof(char) << " byte" << endl;
    }
};

void main() {
    clrscr();
    DataTypeSizes sizes;
    sizes.displaySizes();
    getch();
}
