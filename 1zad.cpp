#include <iostream>
#include <cmath>
//dlv-длинна вектора
//edx,edy,edz-единицы x,y,z
//sp-скалярное произведение
//vp-векторное произведение
//ev-единичный вектор

using namespace std;

float edv(float dlv, int a);


int main(){
float edx, edy, edz;

int x = 1;
int y = 5;
int z = 3;
float dlv = sqrt(x*x+y*y+z*z);
edx = edv(dlv,x);
edy = edv(dlv,y);
edz = edv(dlv,z);
cout << "koord 2 vektora" << endl;
int x1, y1, z1;
cin >> x1;
cin >> y1;
cin >> z1;
int sp = x*x1+y*y1+z*z1;
int vprI, vprJ, vprK;
cout << "sp= " << sp << endl;
cout << "ev= " << " " << edx << " " << edy << " " << edz << endl;
vprI = y*z1 - y1*z;
vprJ = x1*z - x*z1;
vprK = x*y1 - x1*y;
cout << "vp= " << "(" << vprI << ";" << vprJ << ";" << vprK << ")" << endl;




}
float edv(float dlv, int a) {
return a/dlv;

}