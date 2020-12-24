#include <iostream>

using namespace std;

int notMain(int* a, int* b, int* c)
{
    *(a) += 5;
    *(b) = *(a) * 5;
    *(c) = *(c) / 8;

    cout << "\n" << *a << "\n" << *b << "\n" << *c << "\n";
}


int main()
{
    int a = 12;
    int b = 22;
    int c = 113;
    int* new_a = &a;
    int* new_b = &b;
    int* new_c = &c;
    notMain(new_a, new_b, new_c);
    return 0;
}
