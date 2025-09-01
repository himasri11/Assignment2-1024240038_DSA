#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int size = n * (n + 1) / 2;
    int* upper = new int[size];

    auto index = [&](int i, int j) -> int {
        return ((i - 1) * n - (i - 2) * (i - 1) / 2 + (j - i));
    };

    auto set = [&](int i, int j, int val) {
        if (i <= j) upper[index(i, j)] = val;
    };

    auto get = [&](int i, int j) -> int {
        return (i <= j) ? upper[index(i, j)] : 0;
    };

    auto display = [&]() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                cout << get(i, j) << " ";
            cout << endl;
        }
    };

    // Example
    set(1, 1, 1); set(1, 2, 2); set(1, 3, 3); set(1, 4, 4);
    set(2, 2, 5); set(2, 3, 6); set(2, 4, 7);
    set(3, 3, 8); set(3, 4, 9);
    set(4, 4, 10);

    display();

    delete[] upper;
    return 0;
}
