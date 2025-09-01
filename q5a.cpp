#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int* diag = new int[n]; // only n elements needed

    // initialize to 0
    for (int i = 0; i < n; i++) diag[i] = 0;

    auto set = [&](int i, int j, int val) {
        if (i == j) diag[i - 1] = val;
    };

    auto get = [&](int i, int j) -> int {
        return (i == j) ? diag[i - 1] : 0;
    };

    auto display = [&]() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                cout << get(i, j) << " ";
            cout << endl;
        }
    };

    // Example use
    set(1, 1, 5);
    set(2, 2, 8);
    set(3, 3, 3);
    set(4, 4, 9);
    display();

    delete[] diag;
    return 0;
}
