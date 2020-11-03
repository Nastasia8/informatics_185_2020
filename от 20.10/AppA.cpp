#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std; 
float funk( float a, float b,float x) {
float y;
while (x < 0.36) 
{
	y = asin(pow(x,a)) + acos(pow(x,b));
	x = x+ 0.05;
  cout << " ";
	printf ("%g", y);
}
cout << "\n";
return 0;
}