#include <reg51.h>
// Define the columns for the 8x8 matrix
unsigned char col[8] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
// Define the rows for the 8x8 matrix
unsigned char row[8] = {0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F};
// Function to display a specific pattern on the 8x8 matrix
void displayPattern(unsigned char pattern[8]) {
    unsigned char i;
    for (i = 0; i < 8; i++) {
        P2 = col[i];  // column
        P3 = pattern[i];  // row
        // Add a small delay here if needed
    }
}
// Function to display the alphabet 'A'
void displayA() {
    unsigned char pattern[8] = {0x18, 0x24, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x00};
    displayPattern(pattern);
}
// Function to display the alphabet 'B'
void displayB() {
    unsigned char pattern[8] = {0x3E, 0x22, 0x22, 0x3E, 0x22, 0x22, 0x3E, 0x00};
    displayPattern(pattern);
}
// Add similar functions for other alphabets...
void main() {
    P2 = 0x00;
    P3 = 0x00;
    // Display the letter 'A'
    displayA();
    // Add delays or other operations as needed
    // Display the letter 'B'
    displayB();
    // Continue for other alphabets or words
    while (1) {
        // Main program loop
    }
}