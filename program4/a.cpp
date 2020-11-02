#include <iostream>

using namespace std;

void increment(int *a, int *b, int *c)
{
    *(a) += 2;
    *(b) -= 2;
    *(c) = *(c) * 2;
    cout << *a << endl;
    cout << *b << endl;
    cout << *c << endl;
}


int main() 
{
    int a = 10;
    int b = 11;
    int c = 12;
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    increment(pa, pb, pc);
    return 1;
}