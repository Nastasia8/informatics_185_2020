#include <iostream>
#include <cmath>
using namespace std;
float compil(float l,float g)
{
return 2*3.14*sqrt(l/g);
}
float compil(float m,float i,float g,float l)
{
return 2*3.14*sqrt(i/(l*g*m));
}
int main ()
{
float l=11;
float m=20;
float g=9.8;
float i=10;
cout<<"Tmath="<<compil(l,g)<<endl;
cout<<"Tpr="<<compil(m,i,g,l)<<endl;
}