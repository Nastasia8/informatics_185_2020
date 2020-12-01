#include <iostream>
#include <cmath>

using namespace std;

void biba(int k, int boba) {
    for (int n = 0; n <= k; n++) {
        boba *= (n + pow(2, n) / ((4 * n) + (pow(5, 2 * n))));
    }
    cout << "Biba & Boba have been friends for " << boba << " years\n";
}

int main() {
    int n = 0;
    int boba = 1;
    int k;
    cout << "Enter k: ";
    cin >> k;
    biba(k, boba);
    return 0;
}