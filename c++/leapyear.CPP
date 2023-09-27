#include <iostream>

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int year;

    // Input the year
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Check if it's a leap year and print the result
    if (isLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
