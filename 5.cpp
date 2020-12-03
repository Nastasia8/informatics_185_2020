#include <iostream>
#include <random>
using namespace std;

int main() {
    int row = 5;
    int col = 5;
    int a = -1;
    int arr[row][col];
    for (int i = 0; i < row; i++)
        srand(time(0));

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            arr[i][j] = rand() % 10;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            if (arr[j][i] > a) {
                a = arr[j][i];
            }
        cout << "max in col = " << a << endl;
        a = -1;
    }

}