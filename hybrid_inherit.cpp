#include <iostream.h>
#include <conio.h>

class Vehicle {
public:
    void start() { cout << "Vehicle started" << endl; }
};

class Car : virtual public Vehicle {};
class Boat : virtual public Vehicle {};

class Amphibian : public Car, public Boat {};

void main() {
    clrscr();
    Amphibian a;
    a.start(); // No ambiguity due to virtual inheritance
    getch();
}
