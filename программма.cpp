#include <iostream>
#include <cmath>
using namespace std;

void skalar()
{
  float x, y, z, r, x1, y1, z1;
  x=1;
  y=5;
  z=3;
  cout << "Введите x y z второго вектора "<<"\n";
  cin >>  x1 >>  y1 >>  z1;
  r= (x*x1+ y1*y+ z1*z);
  cout << "Скалярное произведение = "<<r <<"\n";
 
}
void vektor()
{
  float x, y, z, x1, y1, z1,x2,x3,x4;
  x=1;
  y=5;
  z=3;
  cout << "Введите x y z второго вектора "<<"\n";
  cin >>  x1 >>  y1 >>  z1;
  x2= (y*z1 - z*y1);
  x3=-(x*z1 - z*x1);
  x4= (x*y1 - y*x1);
  cout << "Векторное произведение = " <<"("<< x2 <<", "<< x3 <<", " << x4<<")" <<"\n";
}
void perimetr()
{
  float x, y, z, a, b, c;
   cout << "Введите 4 стороны трапеции "<<"\n";
  cin >>  x >>  y >>  z >> a;
  b=x+y+z+a;
  cout << "Периметр трапеции = "<<b <<"\n";
  cout << "Введите 2 основания трапеции и её высоту"<<"\n";
  cin >>  x >>  y >>  z;
  b=(x+y)/2*z;
  cout << "Площадь трапеции = "<<b <<"\n";
  

 cout << "Введите сторону квадрата "<<"\n";
  cin >> c;
  b=c*4;
  cout << "Периметр квадрата = "<<b <<"\n";
  b=c*c;
  cout << "Площадь квадрата = "<<b <<"\n";


  cout << "Введите радиус круга "<<"\n";
  cin >> c;
  b=c*(2*M_PI);
  cout << "Периметр круга = "<<b <<"\n";
  b=c*c*M_PI;
  cout << "Площадь круга = "<<b <<"\n";
}

int main() {
  float x, y, z, r, x1, y1, z1;
  x=1;
  y=5;
  z=3;
  r=sqrt(pow(x,2)+ pow(y,2) + pow(z,2));
  cout << "Длина вектора = "<<r <<"\n";
  r=(x+y+z)/r;
  cout << "Единичный вектор = "<<r <<"\n";
  skalar();
  vektor();
  perimetr();

}
