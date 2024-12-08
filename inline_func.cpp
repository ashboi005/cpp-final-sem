#include <iostream.h>
#include <conio.h>

inline int square(int x) {
    return x * x;
}

void main() {
    clrscr();
    cout << "Square of 5: " << square(5) << endl;
    getch();
}
