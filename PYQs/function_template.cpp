#include <iostream.h>
#include <conio.h>

template <class T> //wrote class here because in Turbo CPP even function template needs to be made like this using the keyword class instead of typename
T add(T a, T b) {
    return a + b;
}

void main() {
    clrscr();
    cout << "Int Addition: " << add(5, 10) << endl;
    cout << "Float Addition: " << add(5.5f, 10.5f) << endl;
    getch();
}
