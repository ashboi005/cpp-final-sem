#include <iostream.h>
#include <conio.h>

class Test {
public:
    Test() {
        cout << "Constructor called!" << endl;
    }
    ~Test() {
        cout << "Destructor called!" << endl;
    }
};

void main() {
    clrscr();
    Test t;
    getch();
}
