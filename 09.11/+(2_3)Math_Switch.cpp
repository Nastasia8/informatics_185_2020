#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void sum(float a, float b)
{
	cout << "Sum = " << a + b << endl;
}

void raz(float a, float b)
{
	cout << "Raz = " << a - b << endl;
}

void proizv(float a, float b)
{
	cout << "Proizv = " << a * b << endl;
}

void chast(float a, float b)
{
	cout << "Chast = " << a / b << endl;
}

int main()
{
	float a;
	cout << "Enter 1st number (a) = " << endl;
	cin >> a;

	float b;
	cout << "Enter 2nd number (b) = " << endl;
	cin >> b;

	int f;
	cout << "Enter number of func: 0 - sum; 1 - raz; 2 - proizv; 3 - chast" << endl;
	cin >> f;

	switch (f)
	{
	    case 0:
		sum(a, b);
		break;

		case 1:
		raz(a, b);
		break;

		case 2:
		proizv(a, b);
		break;

		case 3:
		chast(a, b);
		break;

		default:
		cout << "0, 1, 2, 3" << endl;
		break;
	}
	return 0;
}