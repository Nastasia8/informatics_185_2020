#include <iostream>
#include <random>
using namespace std;

void show(int row, int col, int** massivchik)
{
    srand(time(0));
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            massivchik[i][j] = rand() % 30;

}
void show1(int row, int col, int** massivchik)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            cout << massivchik[i][j] << "\t";
        cout << endl;
    }
}

void max(int row, int col, int n, int** massivchik, int* mass) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (massivchik[i][j] > n) {
                n = massivchik[i][j];

            }

        }
        cout << "max = " << n << endl;
        mass[i] = n;
        n = 0;
    }
}
void maxmassivchik(int row, int* mass)
{
    for (int i = 0; i < row; i++)
    {
        cout << mass[i] << "\t";
    }
}


int main() {
    int n = 0;
    int row, col;
    cout << "strochechka = "; cin >> row;
    cout << "stolbichek = "; cin >> col;

    int* mass = new int[row];

    int** massivchik = new int* [row];
    for (int i = 0; i < row; i++)
        massivchik[i] = new int[col];

    show(row, col, massivchik);
    show1(row, col, massivchik);
    max(row, col, n, massivchik, mass);

    cout << endl;
    cout << "max in massivchike" << endl;

    maxmassivchik(row, mass);

    for (int i = 0; i < row; i++) {
        delete[] massivchik[i];
        delete[] massivchik;
    }
    delete[] mass;

}