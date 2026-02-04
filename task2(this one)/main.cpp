#include <iostream>
using namespace std;

#include "logic.h"

int main() {
    int N, M;

   cout << "Enter N: ";
    cin >> N;

    cout << "Enter M (M > N): ";
    cin >> M;

    print_odds_descending(N, M);

    system("pause");

    return 0;
}