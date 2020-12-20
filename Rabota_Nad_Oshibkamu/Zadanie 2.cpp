#include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");
	int k;

	double S = 0;
	cout << "Введите крайнее правое число " << endl;
	cin >> k;

	for (int n = 0; n <= k; n++) 
	{
		S += (4 - n) / ((2 * n + 1) * 3);
	}
	cout << S;
	return 0;
}

//Искренне не понимаю, почему он округляет до целого числа