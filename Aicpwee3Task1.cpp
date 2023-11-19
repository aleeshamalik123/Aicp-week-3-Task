#include <iostream>
#include <iomanip>

const int ROWS = 3;  // Number of slabs
const int COLS = 4;  // Number of columns in the matrix

// Source data matrix
int electricityMatrix[ROWS][COLS] = {
    {50, 75, 120, 180},
    {30, 45, 80, 120},
    {20, 35, 60, 90}
};

// Function to calculate and display cost for slab 1
void costSlab1() {
    int units = 0;
    for (int i = 0; i < COLS; ++i) {
        units += electricityMatrix[0][i];
    }
    
    int cost = units * 10;  // Rs. 10 per unit for slab 1
    std::cout << "Total units for Slab 1: " << units << std::endl;
    std::cout << "Cost for Slab 1: Rs. " << cost << std::endl;
}

// Function to calculate and display cost for slab 2
void costSlab2() {
    int units = 0;
    for (int i = 0; i < COLS; ++i) {
        units += electricityMatrix[1][i];
    }

    int cost = units * 15;  // Rs. 15 per unit for slab 2
    std::cout << "Total units for Slab 2: " << units << std::endl;
    std::cout << "Cost for Slab 2: Rs. " << cost << std::endl;
}

// Function to calculate and display cost for slab 3
void costSlab3() {
    int units = 0;
    for (int i = 0; i < COLS; ++i) {
        units += electricityMatrix[2][i];
    }

    int cost = units * 20;  // Rs. 20 per unit for slab 3
    std::cout << "Total units for Slab 3: " << units << std::endl;
    std::cout << "Cost for Slab 3: Rs. " << cost << std::endl;
}

int main() {
    // Display student's ID at the top of the menu (replace "StudentID" with the actual ID)
    std::cout << "Student's ID: StudentID\n";

    char choice;
    do {
        // Display menu
        std::cout << "\nMenu:\n";
        std::cout << "1. Display the bill of slab 1 and slab 2\n";
        std::cout << "2. Display the bill of slab 3\n";
        std::cout << "Any other key to exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Process user choice
        switch (choice) {
            case '1':
                costSlab1();
                costSlab2();
                break;
            case '2':
                costSlab3();
                break;
            default:
                std::cout << "Exiting program.\n";
                break;
        }

    } while (choice == '1' || choice == '2');

    return 0;
}

