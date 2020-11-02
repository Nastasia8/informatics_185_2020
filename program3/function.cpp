#include <stdio.h>
#include <math.h>
#include <iostream>
#include "objects.h"
#include "function.h"
using namespace std;

//xs - x start, xf - x finish, xi - x for iteration
int function(const float xs, const float xf, const float xi)
{   
    float x;
    for (x=xs; x<xf; x+=xi)
    {
        cout << "При x = " << x << ", y = " << ((pow(sin(x), 3) + pow(cos(x), 3))*log10(x)) << endl;
    }
    return 0;
}

//is - start i, _if - finish i, array[] - array with undefine size
int function(const int is, const int _if, const float array[])
{
    int i;
    float x;
    // I don't need to use sizeof, because var _if is end of the array
    for (i=is; i<_if; i++)
    {
        x = array[i];
        cout << "При x = " << x << ", y = " << ((pow(sin(x), 3) + pow(cos(x), 3))*log10(x)) << endl;
    }
    return 0;
}