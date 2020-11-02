#include <iostream>

using namespace std;

void rotate(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    cout << "A:" << a << endl;
    cout << "B:" << b << endl;
    
}

int main()
{
    int a = 20, b = 2; 
    rotate(a, b);
}