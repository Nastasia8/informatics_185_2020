#include <iostream>
#include <cmath>
using namespace std;

float compilatet(float l, float g)
{
	return 2 * 3.14 * sqrt(l / g);
}
float compilatet(float m, float I, float g, float l)
{
	return 2 * 3.14 * sqrt(I / (l * g * m));
}
int main()
{
	float I = 10;
	float m = 20;
	float g = 9.8;
	float l = 11;
	cout << "yoyo = " << compilatet(l, g) << endl;
	cout << "yoyo 2 = " << compilatet(m, I, g, l) << endl;
}