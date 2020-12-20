#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a, b, x;
a = 7.2f;
b = 4.2f;
for(x = 1.81f; x<=5.31f; x+=0.7f)
{
    cout << pow((abs(a-b*x)/(pow(log10(x),3))), 1.0/2.0)<< endl;
}
return 0;
}
