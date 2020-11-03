#include <stdio.h>
#include <math.h>
#include <iostream>
#include "objects.h"
#include "function.h"
using namespace std;

int function(const float a, const float b, const float xn, const float xk, const float xp)
{
    float x;
    for (x = xn; x < xk; x += xp)
    {
        cout << "For x = " << x << "  y = " << ((acos(pow(x, 2) - pow(b, 2))) / (asin(pow(x, 2) - pow(a, 2)))) << endl;
    }
    return 0;
}

int function(const float a, const float b, int i, const float arr[])
{
    for (i = 0; i != 5; i++)
    {
        cout << "For x = " << arr[i] << "  y = " << ((acos(pow(arr[i], 2) - pow(b, 2))) / (asin(pow(arr[i], 2) - pow(a, 2)))) << endl;
    }
    return 0;
}
