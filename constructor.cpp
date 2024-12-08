#include <iostream.h>
#include <conio.h>
#include <string.h>

class Employee {
private:
    int id;
    char name[20];
public:
    Employee() {
        id = 0;
        strcpy(name, "Unknown");
    }

    Employee(int i, char n[]) {
        id = i;
        strcpy(name, n);
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

void main() {
    clrscr();
    Employee e1;
    Employee e2(101, "John");
    e1.display();
    e2.display();
    getch();
}
