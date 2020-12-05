#include <iostream>
using namespace std;
int main()
{
    //Прямоугольный треугольник (основание вверх)
    char x = 124;
    char y = 92;
    char z = 95;
    char a = 47;
    cout << x << y << endl;
    cout << x << " " << y << endl;
    cout << x << "  " << y << endl;
    cout << x << z << z << z << y << endl;
    cout << endl;
    //Прямоугольный треугольник (основание вниз)
    cout << " " << z << z << z << endl;
    cout << x << "   " << a << endl;
    cout << x << "  " << a << endl;
    cout << x << " " << a << endl;
    cout << x << a << endl;
    cout << endl;
    //Равнобедренный треугольник
    cout << "  " << char(94) << "  " << endl;
    cout << " " << a << " " << y << "  " << endl;
    cout << a << "   " << y << endl;
    cout << char(196) << char(196) << char(196) << char(196) << char(196) << endl;
    //Квадрат
    cout << " " << z << z << z << z << endl;
    cout << char(124) << "    " << char(124) << endl;
    cout << char(124) << "    " << char(124) << endl;
    cout << " " << char(196) << char(196) << char(196) << char(196) << endl;
    cout << endl;
    //Прямоуголник
    cout << " " << z << z << z << z << z << z << z << endl;
    cout << char(124) << "       " << char(124) << endl;
    cout << char(124) << "       " << char(124) << endl;
    cout << " " << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << endl;
    cout << endl;
    //Ромб
    cout << "  " << char(94) << "  " << endl;
    cout << " " << a << " " << y << "  " << endl;
    cout << a << "   " << y << endl;
    cout << "" << y << "   " << a << "  " << endl;
    cout << " " << y << " " << a << endl;
    cout << "  " << char(251) << "  " << endl;
    cout << endl;

    return 0;
}