#include <iostream>

// Function to print "Three blind mice"
void printMice() {
    std::cout << "Three blind mice" << std::endl;
}

// Function to print "See how they run"
void printRun() {
    std::cout << "See how they run" << std::endl;
}

int main() {
    // Call printMice() twice
    printMice();
    printMice();

    // Call printRun() twice
    printRun();
    printRun();

    return 0;
}
