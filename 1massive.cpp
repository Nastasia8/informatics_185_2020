#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int x, i, sr = 0, pr = 1;
    cout << "vvedi X<50" << endl;
    cin >> x;

    int arr[50];

    for (i = 0; i < x; i++)
    {
        sr += arr[i];
        if (i % 2 != 0)
            pr *= arr[i];
    }

    cout << "summa = " << sr << " raznost = " << (sr / x) << " proizvedenie = " << pr << endl;
    return 0;
}