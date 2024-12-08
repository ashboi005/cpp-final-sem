#include <iostream.h>
#include <conio.h>
class A {
protected:
    int a;
public:
    void get_a(int n) { a = n; }
};
class B {
protected:
    int b;
public:
    void get_b(int n) { b = n; }
};
class C : public A, public B {
public:
    void display() {
        cout << "Sum: " << a + b << endl;
    }
};
void main() {
    clrscr();
    C obj;
    obj.get_a(10);
    obj.get_b(20);
    obj.display();
    getch(); }
