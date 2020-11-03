#include <iostream>
#include <cmath>

using namespace std;

float P1(float a); //Объявление периметров и площадей
float P2(float a, float b);
float P3(float a, float b, float c, float d);
float S1(float a);
float S2(float a, float b);
float S3(float a, float b, float h);

int main()

{

    float pi = 3.14;
    float a;
    float b,c,d,h;

      cout << "Стороны квадрата" << endl; //Вводим стороны квадрата (а)
      cin >> a;
      cout << "Площадь квадрата = " << S1(a) << "; Периметр квадрата = " << P1(a) << endl; //Площадь квадрата = (см. стр. 53-56); Периметр квадрата = (см. стр. 41-44) и так далее соответственно вызывая функцию для каждой фигуры
      cout << "Введите радиус" << endl;
      cin >> a;
      cout << "Площадь круга = " << S2(pi,a) << "; Периметр круга = " << P2(a,pi) << endl;
      cout << "Введите стороны трапеции" << endl;
      cout << "a:";
      cin >> a;
      cout << "b:";
      cin >> b;
      cout << "c:";
      cin >> c;
      cout << "d:";
      cin >> d;
      cout << "h:";
      cin >> h;
      cout << "Площадь трапеции = " << S3(a,b,h) << "; Периметр трапеции = " << P3(a,b,c,d) << endl;
}

float P1(float a)
{
return 4*a;
}
float P2(float a, float pi)
{
return 2*a*pi;
}
float P3(float a, float b, float c, float d)
{
return a+b+c+d;
}
float S1(float a)
{
return a*a;
}
float S2(float pi, float b)
{
return pi*b*b;
}
float S3(float a, float b, float h)
{
return ((a+b)/2)*h;
}