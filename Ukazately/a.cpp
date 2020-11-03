#include <iostream>
using namespace std;
void def(int *a)
{
    (*a)++;
}
int main()
{
    int x = 5;
    int *p;
    cout << "x before: " << x << endl;
    p = &x;
    def(p);
    cout << "x after: " << x << endl;
    return 0;
}
