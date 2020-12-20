#include <iostream>
#include <string>
#include "film.h"
using namespace std;

int main(){
int *arr = new int [3];
float arr2[3];
cout << "Write name, year, points: " << endl;
film f1;
f1.set_name();
f1.set_year();
f1.set_point(arr);
arr2[0] = f1.sr_point(arr);
cout << "Write name, year, points: " << endl;
film f2;
f2.set_name();
f2.set_year();
f2.set_point(arr);
arr2[1] = f2.sr_point(arr);
cout << "Write name, year, points: " << endl;
film f3;
f3.set_name();
f3.set_year();
f3.set_point(arr);
arr2[2] = f3.sr_point(arr);

float max = arr2[0];
int t = 0;
for (int i = 1;i < 3; i++ ){
    if (max < arr2[i])
    {
        max = arr2[i];
        t = i;
    }
}
switch (t)
{
case 0:
    f1.get();
    break;
case 1:
    f2.get();
    break;
case 2:
    f3.get();
    break;
}
}