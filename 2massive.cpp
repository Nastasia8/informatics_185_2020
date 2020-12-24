#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int max = -2147483648;
    int x, y, i, j;
    cout << "vvedi X<50" << endl;
    cin >> x;
    cout << "vvedi Y<50" << endl;
    cin >> y;

    int arr[50][50];

    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++)
            if (arr[x][y] > max)
                max = arr[x][y];


    cout << "max = " << max << endl;
    return 0;
}