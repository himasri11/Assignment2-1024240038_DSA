#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int* tri = new int[3 * n - 2]; // store lower, main, upper

    auto set = [&](int i, int j, int val) {
        if (i - j == 1)       tri[i - 2] = val;           // lower diag
        else if (i == j)      tri[n - 1 + i - 1] = val;   // main diag
        else if (i - j == -1) tri[2 * n - 1 + i - 1] = val; // upper diag
    };

    auto get = [&](int i, int j) -> int {
        if (i - j == 1)       return tri[i - 2];
        else if (i == j)      return tri[n - 1 + i - 1];
        else if (i - j == -1) return tri[2 * n - 1 + i - 1];
        else return 0;
    };

    auto display = [&]() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                cout << get(i, j) << " ";
            cout << endl;
        }
    };

    // Example
    set(1, 1, 4); set(1, 2, 1);
    set(2, 1, 3); set(2, 2, 5); set(2, 3, 2);
    set(3, 2, 6); set(3, 3, 8); set(3, 4, 7);
    set(4, 3, 9); set(4, 4, 0);

    display();

    delete[] tri;
    return 0;
}
