#include <iostream>
#include <cmath>

using namespace std;

void sum(int p, float I) {
    int m = 2;                 
    cout << "eventually " << 40000 * pow((1 + (I / m)), m * 5) << " here\n";
}

int main()
{
    int p = 40000;
    float I = 0.1;
    sum(p, I);
    return 0;