#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	int max = 0;
	int strochka = 4;
	int stolbechek = 7;
	int arr[strochka][stolbechek];

	for (int i = 0; i < strochka; i++)

	{
		for (int j = 0; j < stolbechek; j++)
		{
			arr[i][j] = rand() % 200;
			cout << " t " << arr[i][j];

		}
		cout << endl;
	}
	for (int i = 0; i < strochka; i++)

	{
		for (int j = 0; j < stolbechek; j++)
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
	}
	cout << max << endl;

	return 0;
}