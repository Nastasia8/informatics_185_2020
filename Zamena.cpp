#include <iostream>

using namespace std;

int Zamena(int x, int y)

{
    int z;
    z = x;
    x = y;
    y = x;
}

int main()
{
    int x, y;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    Zamena;
    cout << "Параметры после обмена местами:" << endl;
    cout << " x = " << x << endl;
    cout << " y = " << y << endl;

    return 0;
}