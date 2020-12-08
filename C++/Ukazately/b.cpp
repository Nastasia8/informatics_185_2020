#include <iostream>
using namespace std;
void def_swap(float &x, float &y)
{
    float c;
    c = x;
    x = y;
    y = c;
}
int main()
{
    float a, b;
    cout << "a = ";
    cin >> a;
    cout << endl;
    cout << "b = ";
    cin >> b;
    cout << endl;
    cout << "a before:" << a << endl;
    cout << "b before:" << b << endl;
    def_swap(a, b);
    cout << "a after:" << a << endl;
    cout << "b after:" << b << endl;
    return 0;
}