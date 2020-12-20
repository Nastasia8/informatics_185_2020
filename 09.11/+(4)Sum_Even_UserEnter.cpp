#include <iostream>

using namespace std;

void EvenRange(int nach, int kon)
{
	int sum = 0;

	for (int i = nach; i <= kon; i++)
	{
		if (nach % 2 == 0)
		{
			sum = sum + nach;
		}
		cout << "Digit = " << nach << endl;
		nach++;
	}
	cout << "Sum even = " << sum << endl;
}

int main()
{
	int nach;
	cout << "Enter first value = " << endl;
	cin >> nach;

	int kon;
	cout << "Enter last value = " << endl;
	cin >> kon;

	EvenRange(nach, kon);
}