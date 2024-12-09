#include <iostream.h>
#include <conio.h>

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Base() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }

    int getPrivateVar() { // Public method to access privateVar
        return privateVar;
    }
};

class DerivedPrivate : private Base { // Inherit Base as private
public:
    void display() {
        // privateVar is not accessible directly
        cout << "Private Var (via getter): " << getPrivateVar() << endl; // Access using getter
        cout << "Protected Var: " << protectedVar << endl; // Accessible in derived class
        cout << "Public Var: " << publicVar << endl;       // Becomes private here
    }
};

class DerivedProtected : protected Base { // Inherit Base as protected
public:
    void display() {
        // privateVar is not accessible directly
        cout << "Private Var (via getter): " << getPrivateVar() << endl; // Access using getter
        cout << "Protected Var: " << protectedVar << endl; // Accessible in derived class
        cout << "Public Var: " << publicVar << endl;       // Becomes protected here
    }
};

class DerivedPublic : public Base { // Inherit Base as public
public:
    void display() {
        // privateVar is not accessible directly
        cout << "Private Var (via getter): " << getPrivateVar() << endl; // Access using getter
        cout << "Protected Var: " << protectedVar << endl; // Accessible in derived class
        cout << "Public Var: " << publicVar << endl;       // Remains public
    }
};

void main() {
    clrscr();

    DerivedPrivate obj1;
    DerivedProtected obj2;
    DerivedPublic obj3;

    cout << "Accessing through DerivedPrivate class:" << endl;
    obj1.display();

    cout << "\nAccessing through DerivedProtected class:" << endl;
    obj2.display();

    cout << "\nAccessing through DerivedPublic class:" << endl;
    obj3.display();

    // Access publicVar outside the class
    // obj3.publicVar = 100; // Works only for public inheritance
    getch();
}
