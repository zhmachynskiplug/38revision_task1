#include "logic.h"

string build_pyramid(char symbol, int height) {
    if (height <= 0) return "";

    string result;


    for (int i = 0; i < height; ++i) {

        result.append(height - i - 1, ' ');

        result.append(2 * i + 1, symbol);

        result += '\n';
    }

    return result;
}