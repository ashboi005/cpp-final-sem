//Display the Ranges of Different Data Types

#include <iostream.h>
#include <conio.h>
#include <iomanip.h> // Required for manipulators

class DataTypeRanges {
public:
    void displayRanges() {
        cout << setw(20) << "Data Type"
             << setw(25) << "Minimum Value"
             << setw(25) << "Maximum Value" << endl;

        cout << setfill('-') << setw(70) << "-" << setfill(' ') << endl;

        cout << setw(20) << "int"
             << setw(25) << INT_MIN
             << setw(25) << INT_MAX << endl;

        cout << setw(20) << "float"
             << setw(25) << FLT_MIN
             << setw(25) << FLT_MAX << endl;

        cout << setw(20) << "double"
             << setw(25) << DBL_MIN
             << setw(25) << DBL_MAX << endl;

        cout << setw(20) << "char"
             << setw(25) << CHAR_MIN
             << setw(25) << CHAR_MAX << endl;
    }
};

void main() {
    clrscr();

    DataTypeRanges obj;
    obj.displayRanges();

    getch();
}
