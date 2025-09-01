#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int size = n * (n + 1) / 2;
    int* sym = new int[size];

    auto index = [&](int i, int j) -> int {
        if (i >= j)
            return (i * (i - 1)) / 2 + (j - 1);
        else
            return (j * (j - 1)) / 2 + (i - 1);  // use symmetry
    };

    auto set = [&](int i, int j, int val) {
        sym[index(i, j)] = val;
    };

    auto get = [&](int i, int j) -> int {
        return sym[index(i, j)];
    };

    auto display = [&]() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                cout << get(i, j) << " ";
            cout << endl;
        }
    };

    // Example
    set(1, 1, 1);
    set(2, 1, 2); set(2, 2, 3);
    set(3, 1, 4); set(3, 2, 5); set(3, 3, 6);
    set(4, 1, 7); set(4, 2, 8); set(4, 3, 9); set(4, 4, 10);

    display();

    delete[] sym;
    return 0;
}

