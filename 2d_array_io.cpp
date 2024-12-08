#include <iostream.h>
#include <conio.h>

class Matrix {
private:
    int arr[2][2]; // 2x2 array to store matrix elements

public:
    // Function to input elements into the array
    void inputMatrix() {
        cout << "Enter elements of the 2x2 matrix:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> arr[i][j];
            }
        }
    }

    // Function to display the elements of the array
    void displayMatrix() {
        cout << "The 2x2 matrix is:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

void main() {
    clrscr();           // Clear the screen
    Matrix m;           // Create an object of the Matrix class
    m.inputMatrix();    // Call the input function
    m.displayMatrix();  // Call the output function
    getch();            // Wait for a key press
}
