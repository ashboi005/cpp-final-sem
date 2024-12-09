#include <iostream.h>
#include <conio.h>

#define SIZE 5

class Stack {
    int arr[SIZE], top;

public:
    Stack() { top = -1; } // Constructor to initialize stack

    void push(int val) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = val;
            cout << val << " pushed onto the stack." << endl;
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top--] << " popped from the stack." << endl;
        }
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void search(int val) {
        for (int i = 0; i <= top; i++) {
            if (arr[i] == val) {
                cout << val << " found at position " << i + 1 << "." << endl;
                return;
            }
        }
        cout << val << " not found in the stack." << endl;
    }
};

void main() {
    clrscr();
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    stack.pop();
    stack.display();
    stack.search(20);
    stack.search(40);
    getch();
}
