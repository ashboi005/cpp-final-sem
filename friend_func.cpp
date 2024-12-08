#include <iostream.h>
#include <conio.h>

class Box {
private:
    int length;
public:
    Box() {
        length = 0;
    }
    friend int getLength(Box);
};

int getLength(Box b) {
    return b.length + 10;
}

void main() {
    clrscr();
    Box b;
    cout << "Length of Box: " << getLength(b) << endl;
    getch();
}
