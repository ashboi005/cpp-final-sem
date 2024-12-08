#include <iostream.h>
#include <conio.h>

class Box {
private:
    int length, width, height;
public:
    Box() {
        length = width = height = 1;
        cout << "Default Box created: " << length << "x" << width << "x" << height << endl;
    }
    Box(int l) {
        length = width = height = l;
        cout << "Cube Box created: " << length << "x" << width << "x" << height << endl;
    }
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
        cout << "Custom Box created: " << length << "x" << width << "x" << height << endl;
    }
    ~Box() {
        cout << "Box destroyed: " << length << "x" << width << "x" << height << endl;
    }

    friend class BoxTools;
    friend int calculateVolume(Box& b);

    void setDimensions(int l) {
        length = width = height = l;
        cout << "Dimensions set to cube: " << l << "x" << l << "x" << l << endl;
    }



    void setDimensions(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
        cout << "Dimensions updated: " << l << "x" << w << "x" << h << endl;
    }
};

class BoxTools {
public:
    static void printDimensions(Box& b) {
        cout << "Dimensions: " << b.length << "x" << b.width << "x" << b.height << endl;
    }
};
int calculateVolume(Box& b) {
    return b.length * b.width * b.height;
}

void main() {
    clrscr();
    Box defaultBox;
    Box cubeBox(3);
    Box customBox(3, 4, 5);

    cout << "Volume of Custom Box: " << calculateVolume(customBox) << endl;

    BoxTools::printDimensions(customBox);

    defaultBox.setDimensions(2);
    BoxTools::printDimensions(defaultBox);

    customBox.setDimensions(5, 6, 7);
    BoxTools::printDimensions(customBox);

    getch();
}
