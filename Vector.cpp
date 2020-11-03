#include <iostream>
#include <cmath>

using namespace std;

float lenght(float x, float y, float z)
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
void edv(float x1, float y1, float z1)
{
	cout << "B (" << x1 / lenght(x1, y1, z1) << "," << y1 / lenght(x1, y1, z1) << "," << z1 / lenght(x1, y1, z1) << ")" << endl;
}

int main()
{
	int x2;
	cout << "Введите целое число x2: ";
	cin >> x2;

	int y2;
	cout << "Введите целое число y2: ";
	cin >> y2;

	int z2;
	cout << "Введите целое число z2: ";
	cin >> z2;

	float x1 = 1;
	float y1 = 5;
	float z1 = 3;
	float r;
	float k;
	float a;
	float b;
	float c;
	float _l = lenght(x1, y1, z1);
	edv(x1, y1, z1);

	{
		k = x1 * x2 + y1 * y2 + z2 * z1;

		a = y1 * z2 - z1 * y2;
		b = z1 * x2 - x1 * z2;
		c = x1 * y2 - y1 * x2;
		cout << "Длина вектора = " << _l << endl;
		cout << "Скалярное произведение = " << k << endl;
		cout << "Векторное произведение A" << "(" << a << "," << b << "," << c << ")" << endl;
	}

	cin.get();
	return 0;
}