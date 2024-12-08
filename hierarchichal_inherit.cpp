#include <iostream.h>
#include <conio.h>

class Vehicle {
public:
    void start() { cout << "Vehicle started" << endl; }
};

class Car : public Vehicle {
public:
    void honk() { cout << "Car honking..." << endl; }
};

class Bike : public Vehicle {
public:
    void rev() { cout << "Bike revving..." << endl; }
};

void main() {
    clrscr();
    Car c;
    Bike b;
    c.start();
    c.honk();
    b.start();
    b.rev();
    getch();
}
