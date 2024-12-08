#include <iostream.h>
#include <conio.h>
class Complex {
private:
    float real;
    float imag;
public:
    // Constructor with default values
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    Complex operator+(Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
void main() {
    clrscr();
    Complex c1(3, 4), c2(1, 2), c3;
    c3 = c1 + c2;
    c3.display();
    getch();
}
