#include <iostream>

using namespace std;

void
chetdiapazon(int nach, int kon)
{
	int sum = 0;
	while (nach <= kon)
	{
		if (nach % 2 == 0)
		{
			sum = sum + nach;
		}
		cout << "Digit = " << nach << endl; nach++;

	}
	cout << "Sum chet = " << sum << endl;

}

int main()
{
	int nach;
	cout << "Vvedite nachalnoe znachenie" << endl;
	cin >> nach;

	int kon;
	cout << "Vvedite konechnoe znachenie" << endl;
	cin >> kon;

	chetdiapazon(nach, kon);

}
