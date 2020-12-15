#include <iostream>

using namespace std;

void change(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
    cout << "Now a is " << a << endl;
    cout << "Now b is " << b << endl;

}

int main()
{
    int a, b;
    cout << "Enter a\n";
    cin >> a;
    cout << "Enter b\n";
    cin >> b;
    change(a, b);
    return 0;
}
