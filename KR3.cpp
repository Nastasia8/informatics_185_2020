#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int arr[3][6];
    int new_arr[3];
    int sum;
    int z;
    cout << "Enter a number: ";
    cin >> z;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            arr[i][j] = rand() % 99;
        }
    }
    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 6; j++) {
            if (arr[i][j] > z) {
                sum += arr[i][j];
            }
        }
        new_arr[i] = sum;
    }
    for (int i = 0; i < 3; i++) {
        cout << new_arr[i] << "\t";
    }
    return 0;
}