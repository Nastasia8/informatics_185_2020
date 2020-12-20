#include <iostream>

using namespace std;

int main() 
{
    int n = 5;
    cout << "n = " << n << endl;
    int * pn = &n;
    * pn = 10;
    cout << "n = " << n << endl;
}