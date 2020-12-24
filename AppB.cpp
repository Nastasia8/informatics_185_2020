#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std; 
float funk( float a, float b, float _array_x[],int n){
  float y;


for (int i=0; i<n; i++)
{
	y = asin(pow(_array_x[i],a)) + acos(pow(_array_x[i],b));
  std::cout << " ";
	printf ("%g", y);

}
return 0;
}