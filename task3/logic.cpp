#include "logic.h"

bool is_power_too(int number) {
    if (number <= 0) {
        return false;
    }

    
    for (int n = number; n > 1; n /= 2) {
        
        if (n % 2 != 0) {
            return false;
        }
    }

    return true;
}

