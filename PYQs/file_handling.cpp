//Open a file and write "Hello World" to it using File Handling

#include <iostream.h>
#include <fstream.h>
#include <conio.h>

void main() {
    clrscr();

    ofstream file("example.txt"); // Open file in write mode
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    file << "Hello World!" << endl; // Write to the file
    file.close();

    ifstream inFile("example.txt"); // Open file in read mode
    char str[50];
    inFile.getline(str, 50);
    cout << "Content of file: " << str << endl;

    inFile.close();
    getch();
}
