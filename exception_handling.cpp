#include <iostream> // Modern header for input/output

int divide(int a, int b) {
    if (b == 0)
        throw "Division by zero!"; // Throw a const char* exception
    return a / b;
}

int main() {
    try {
        std::cout << "Result: " << divide(10, 2) << std::endl; // This works fine
        std::cout << "Result: " << divide(10, 0) << std::endl; // This will throw an exception
    } catch (const char* msg) { // Catch the exception
        std::cout << "Error: " << msg << std::endl;
    }
    return 0;
}
