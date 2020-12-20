#include <iostream>

using namespace std;

int main()
{

    int n = 5;
    cout << " n = " << n << endl;
    int* on = &n;
    *on = 10;
    cout << " n = " << n << endl;

}