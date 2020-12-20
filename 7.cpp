#include <iostream>
using namespace std;

void f(int& on, int& ox)
{

    on++;
    ox = 15;
}

int main()
{

    int n = 5;
    int x = 10;
    cout << "n= " << n << endl;
    cout << "x= " << x << endl;
    int* on = &n;
    int* ox = &x;
    f(*on, *ox);
    cout << "n = " << n << endl;
    cout << "x = " << x << endl;

}