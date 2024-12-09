//Operator Overloading with Access Specifiers

#include <iostream.h>
#include <conio.h>

class Example {
private:
    int value;

public:
    Example(int v) {
        value = v;
    }

    // Overload + operator
    Example operator+(Example& obj) {
        Example temp(0);
        temp.value = value + obj.value;
        return temp;
    }

    // Display value
    void display() {
        cout << "Value: " << value << endl;
    }
};

void main() {
    clrscr();
    Example obj1(10), obj2(20), result(0);

    result = obj1 + obj2; // Calls overloaded + operator
    result.display();     // Displays result
    getch();
}
