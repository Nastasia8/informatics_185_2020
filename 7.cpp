#include <iostream>
using namespace std;


void funkcia(int &pn, int &px)
{
    pn++;
    px = 15;
}

int main()
{
    int n = 5;
    int x = 10;
    cout << "n= " << n << endl;
    cout << "x= " << x << endl;
    int * pn = &n;
    int * px = &x;
    funkcia( * pn, * px);
    cout << "n= " << n << endl;
    cout << "x= " << x<< endl;
}