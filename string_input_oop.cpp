#include <iostream.h>
#include <conio.h>

class Name{
private:
    char name[50];
public:
    void getName(){
        cout << "Enter Your Name: ";
        cin >> name;
    }
    void giveName(){
        cout << "Hello " << name;
    }
};


void main() {
    clrscr();
    Name n;
    n.getName();
    n.giveName();
    getch();
}
