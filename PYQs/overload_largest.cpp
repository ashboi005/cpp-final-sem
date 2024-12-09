//Largest of Two, Three, and Four Numbers Using Function Overloading

#include <iostream.h>
#include <conio.h>

class Largest {
public:
    // Find the largest of two numbers
    int largest(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }

    // Find the largest of three numbers
    int largest(int a, int b, int c) {
        if (a > b && a > c)
            return a;
        else if (b > c)
            return b;
        else
            return c;
    }

    // Find the largest of four numbers
    int largest(int a, int b, int c, int d) {
        int largestNum;
        if (a > b)
            largestNum = a;
        else
            largestNum = b;

        if (c > largestNum)
            largestNum = c;

        if (d > largestNum)
            largestNum = d;

        return largestNum;
    }
};

void main() {
    clrscr();
    Largest obj;

    cout << "Largest of 10 and 20: " << obj.largest(10, 20) << endl;
    cout << "Largest of 5, 15, and 10: " << obj.largest(5, 15, 10) << endl;
    cout << "Largest of 8, 25, 12, and 18: " << obj.largest(8, 25, 12, 18) << endl;

    getch();
}
