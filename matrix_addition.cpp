#include <iostream.h>
#include <conio.h>

class Matrix {
private:
    int m1[2][2]; // First matrix
    int m2[2][2]; // Second matrix
    int m3[2][2]; // Resultant matrix

public:
    // Function to take user input for m1 and m2
    void assignValues() {
        int i, j; // Declare loop variables outside the loops
        cout << "Enter values for the first 2x2 matrix (m1):" << endl;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> m1[i][j];
            }
        }

        cout << "Enter values for the second 2x2 matrix (m2):" << endl;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> m2[i][j];
            }
        }
    }

    // Function to add m1 and m2, store result in m3
    void addMatrices() {
        int i, j; // Declare loop variables outside the loops
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                m3[i][j] = m1[i][j] + m2[i][j];
            }
        }
    }

    // Function to display the resultant matrix
    void displayResult() {
        int i, j; // Declare loop variables outside the loops
        cout << "Resultant Matrix:" << endl;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
    }
};

void main() {
    clrscr();           // Clear the screen
    Matrix mat;         // Create an object of the Matrix class
    mat.assignValues(); // Take user input for m1 and m2
    mat.addMatrices();  // Perform matrix addition
    mat.displayResult();// Display the resultant matrix
    getch();            // Wait for a key press
}
