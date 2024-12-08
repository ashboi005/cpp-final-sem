#include <iostream.h>
#include <conio.h>

template <class T>
class Calculator {
    T num1, num2;
public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}
    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
};

void main() {
    clrscr();
    Calculator<int> intCalc(10, 5);
    cout << "Int Add: " << intCalc.add() << endl;

    Calculator<float> floatCalc(10.5, 2.3);
    cout << "Float Add: " << floatCalc.add() << endl;
    getch();
}
