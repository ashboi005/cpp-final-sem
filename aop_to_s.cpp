#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();
    char *names[] = {"Alice", "Bob", "Charlie"};
    for (int i = 0; i < 3; i++) {
        cout << "Name[" << i << "]: " << names[i] << endl;
    }
    getch();
}
