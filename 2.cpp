#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void summa(float x, float y);
void raznost(float x, float y);
void proizvedenie(float x, float y);
int main()
{
	float x;
	float y;
	float z;
	cin >> x;
	cin >> y;
	summa(x, y);
	raznost(x, y);
	z = proizvedenie(x, y);
	cout << "v.proizvedenie = " << z << endl;
	return 0;
}
void summa(float x, float y) {
	cout << "summa = " << x + y;
void raznost(float x, float y) {
	cout << "raznost = " << x - y;
}
void proizvedenie(float x, float y) {
	return x * y;