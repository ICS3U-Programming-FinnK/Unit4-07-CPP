// Created by: Finn Kitor
// Created on: November 20th, 2023
// This program generates different values between 1000 to 2000 using loops and if statements.
// it will generate numbers across by 5
#include <iostream>

void printIntegers() {
    int count = 0;  // Counter to keep track of the number of integers printed in a line

    for (int i = 1000; i <= 2000; i++) {
        std::cout << i << " ";
        count++;

        // Check if five integers have been printed in the current line
        if (count == 5) {
            std::cout << std::endl;  // Move to the next line
            count = 0;               // Reset the counter
        }
    }
}

int main() {
    printIntegers();

    return 0;
}