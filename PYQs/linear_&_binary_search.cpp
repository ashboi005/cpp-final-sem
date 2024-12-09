//Program to Search an Element Using Linear and Binary Search

#include <iostream.h>
#include <conio.h>

class Search {
private:
    int arr[10];

public:
    void inputArray() {
        cout << "Enter 10 elements in ascending order for binary search: ";
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    void linearSearch(int target) {
        for (int i = 0; i < 10; i++) {
            if (arr[i] == target) {
                cout << "Element found at index " << i << " using linear search." << endl;
                return;
            }
        }
        cout << "Element not found using linear search." << endl;
    }

    void binarySearch(int target) {
        int low = 0, high = 9, mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] == target) {
                cout << "Element found at index " << mid << " using binary search." << endl;
                return;
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << "Element not found using binary search." << endl;
    }
};

void main() {
    clrscr();
    Search searchObj;
    int target;

    searchObj.inputArray();

    cout << "Enter the element to search: ";
    cin >> target;

    searchObj.linearSearch(target);  // Perform linear search
    searchObj.binarySearch(target); // Perform binary search

    getch();
}
