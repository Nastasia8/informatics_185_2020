#include <iostream>
#include <cmath>
using namespace std;
void skalar(float x1,float  y1,float z1,float x,float  y,float z)
{
  float r;
  r= (x*x1+ y1*y+ z1*z);
  cout << "Скалярное произведение = "<<r <<"\n";
 
}


void vektor(float x1,float y1,float z1,float x,float  y,float z)
{
  float x2,x3,x4;
  
  x2= (y*z1 - z*y1);
  x3=-(x*z1 - z*x1);
  x4= (x*y1 - y*x1);
  cout << "Векторное произведение = " <<"("<< x2 <<", "<< x3 <<", " << x4<<")" <<"\n";

}


void perimetr(float a)//kvadrat
{float b;
b=a*4;
cout << "Периметр квадрата = "<<b <<"\n";
}
void perimetr(float r, float pi)//kryg
{float b;
b=r*(2*pi);
  cout << "Периметр круга = "<<b <<"\n";
}
void perimetr(float a1, float a2, float a3, float a4)//trapec
{float b;
b=a1+a2+a3+a4;
cout << "Периметр трапеции = "<<b <<"\n";
}





void ploshad(float a)//kvadrat
{
float b;
b=a*a;
cout << "Площадь квадрата = "<<b <<"\n";
}
void ploshad(float r, float pi)//krug
{
float b;
b=r*r*pi;
cout << "Площадь квадрата = "<<b <<"\n";
}
void ploshad(float x, float y, float h)//trapec
{
float b;
b=(x+y)/2*h;
cout << "Площадь трапеции = "<<b <<"\n";
}
 


int main() {
  float x, y, z, r, x1, y1, z1,a,a1,a2,a3;
  const float pi=M_PI;
  x=1;
  y=5;
  z=3;
  r=sqrt(pow(x,2)+ pow(y,2) + pow(z,2));
  cout << "Длина вектора = "<<r <<"\n";
  r=(x+y+z)/r;
  cout << "Единичный вектор = "<<r <<"\n";


  cout << "Введите x y z второго вектора "<<"\n";
  cin >>  x1 >>  y1 >>  z1;

  skalar(x1, y1,z1,x,y,z);
  vektor(x1, y1,z1,x,y,z);




  cout << "Ищем периметр квадрата, 1 сторона"<<"\n";
  cin >>  a;
  perimetr(a);
  cout << "Ищем периметр круга, радиус" <<"\n";
  cin >>  a;
  perimetr(a,pi);
  cout << "Ищем периметр трапеции, 4 стороны" <<"\n";
  cin >>  a>>a1>>a2>>a3;
  perimetr(a,a1,a2,a3);


  cout << "Ищем площадь квадрата, 1 сторона" <<"\n";
  cin >>  a;
  ploshad(a);
  cout << "Ищем площадь круга, радиус" <<"\n";
  cin >>  a;
  ploshad(a,pi);
 cout << "Ищем площадь трапеции, 2 основания и высота" <<"\n";
  cin >>  a >>  a1 >>  a2;
  ploshad(a,a1,a2);
}