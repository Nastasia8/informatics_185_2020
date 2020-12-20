#include <iostream>
#include <cmath>

using namespace std;

void biba(int k, int m) {
    for (int n = 0; n <= k; n++) {
        m *= (n + pow(2, n) / ((4 * n) + (pow(5, 2 * n))));
    }
    cout << " eventually" << m << " years\n";
}

int main() {
    int n = 0;
    int m = 1;
    int k;
    cout << "Enter k: ";
    cin >> k;
    biba(k, m);
    return 0;
}