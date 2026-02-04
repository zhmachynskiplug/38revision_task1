#include "logic.h"

int main() {
   
    char symbol;
    int height;

    cout << "Enter symbol: ";
    cin >> symbol;

    cout << "Enter height: ";
    cin >> height;

    if (height <= 0) {
        cout << "Height must be positive!\n";
        return 1;
    }

    string pyramid = build_pyramid(symbol, height);
    cout << "\nPyramid:\n" << pyramid;

    
    cout << "\nAdditional example:\n";

    cout << "\n1. Pyramid with '#' height 4:\n";
    cout << build_pyramid('#', 4);

    return 0;
}