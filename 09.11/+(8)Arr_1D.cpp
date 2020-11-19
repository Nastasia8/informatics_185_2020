#include <random>
#include <ctime>
#include <iostream>

using namespace std;

void fillArray(int N, int *arr_1d) //Функция заполнения массива рандомными числами
{
	unsigned rand_value = 11;
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr_1d[i] = rand() % 50;
	}
}

void showArray(int *arr_1d, int N) //Функция для вывода массива
{
	for (int i = 0; i < N; i++)
	{
		cout << arr_1d[i] << endl;
	}
}

void foundMax(int *arr_1d, int N) //Функция для нахождения максимума
{
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr_1d[i] > max)
			max = arr_1d[i];
	}
	cout << "Max element of array is " << max << endl;
}

int main()
{
	int N; //Объявление размерности массива
	cout << "Enter array value = ";
	cin >> N;

	int *arr_1d = new int[N]; //Объявление массива

	fillArray(N, arr_1d);
	showArray(arr_1d, N);
	foundMax(arr_1d, N);

	delete arr_1d; //Удаление из памяти массива
}