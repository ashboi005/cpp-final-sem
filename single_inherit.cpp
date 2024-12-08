#include <iostream.h>
#include <conio.h>

class Account {
public:
    float salary;

    // Constructor to initialize salary
    Account() {
        salary = 60000;
    }
};

class Programmer : public Account {
public:
    float bonus;

    // Constructor to initialize bonus
    Programmer() {
        bonus = 5000;
    }
};

void main() {
    clrscr();
    Programmer p1;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;
    getch();
}
