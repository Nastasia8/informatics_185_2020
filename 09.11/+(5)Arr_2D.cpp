#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	const int rows = 5; //Кол-во строк
	const int columns = 5; //Кол-во столбцов

	int arr2d[rows][columns]; // Создаём массив

	for (int i = 0; i < rows; i++) //Ниже заполняем массив. В первой строке идём по строкам [i], после по столбцам [j]
	{
		for (int j = 0; j < columns; j++)
		{
			arr2d[i][j] = rand() % 50; //Рандомизируем значения ячеек до 50
		}
	}

	for (int i = 0; i < rows; i++) //Вывод массива
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr2d[i][j] << " ";
		}
		cout << endl;
	}


	int max = 0;
	for (int j = 0; j < columns; j++)
	{
		for (int i = 0; i < rows; i++)
		{
			if (arr2d[i][j] > max)
				max = arr2d[i][j];
		}
		cout << max << " ";
		cout << endl;
	}

	return 0;
}

//В готовой программе сначала показывается матрица 5х5. Далее в столбец выводятся все максимальные значения столбцов, где 1ая строка соответствует 1ому столбцу и т.д.