//Write a Program to Multiply Two Lists and Two 3x3 Matrices Using Function Overloading

#include <iostream.h>
#include <conio.h>

class Multiply {
public:
    // Function to multiply two lists
    void mul(int list1[], int list2[], int size) {
        cout << "Multiplication of two lists: ";
        for (int i = 0; i < size; i++) {
            cout << list1[i] * list2[i] << " ";
        }
        cout << endl;
    }

    // Function to multiply two 3x3 matrices
    void mul(int mat1[3][3], int mat2[3][3]) {
        int result[3][3] = {0};

        // Multiply matrices
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        // Display result
        cout << "Multiplication of matrices: " << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

void main() {
    clrscr();

    Multiply obj;

    // Lists for multiplication
    int list1[5] = {1, 2, 3, 4, 5};
    int list2[5] = {5, 4, 3, 2, 1};
    obj.mul(list1, list2, 5);

    // Matrices for multiplication
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int mat2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};
    obj.mul(mat1, mat2);

    getch();
}
