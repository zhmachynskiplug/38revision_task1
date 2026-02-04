#include "logic.h"

void print_odds_descending(int N, int M) {


    if (M <= N) {
        cout << "Invalid range" << endl;
        return;
    }


    int current = M - ((M + 1) % 2);


    int last = N + (N % 2);
    if (last < N) last++;


    cout << "Odd numbers: ";
    bool first_num = true;

    while (current >= last) {
        if (!first_num) cout << " ";
        cout << current;
        current -= 2;
        first_num = false;
    }

    if (first_num) {
        cout << "none";
    }

    cout << endl;
}