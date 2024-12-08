#include <iostream.h>
#include <conio.h>
#include <string.h>

void main() {
    clrscr();
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];
    strcat(str1, str2);  // Concatenates str2 to str1
    strcpy(str3,str1); // Copies str1 to str3 and is used to assign values
    cout << "Concatenated String: " << str1 << endl;
    cout << "Length of str1: " << strlen(str1) << endl;
    cout << str3;
    getch();
}
