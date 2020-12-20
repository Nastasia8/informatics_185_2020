#include <iostream>
#include <ctime>
#include <random>

using namespace std;

void ShowFirstArr(int **arr_2D, int rows, int cols)
{
	cout << "\nИсходный массив" << endl;

	for (int i = 0; i < rows; i++) //Вывод исходного массива
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr_2D[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n" << endl;
}

void ChangeArr(int **arr_2D, int rows, int cols)
{
	for (int i = 0; i < rows; i++) //Изменение массива
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr_2D[i][j] % 2 != 0)
			{
				arr_2D[i][j] = arr_2D[i][j] + 3;
			}
			else
			{
				arr_2D[i][j] = arr_2D[i][j] - 1;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int rows; //Ввод строк
	cout << "Введите количество строк = " << endl;
	cin >> rows;

	int cols; //Ввод столбцов
	cout << "\nВведите количество столбцов = " << endl;
	cin >> cols;

	int **arr_2D = new int*[rows]; //Создание массива и выделение под него памяти

	for (int i = 0; i < rows; i++)
	{
		arr_2D[i] = new int[cols];
	}

	unsigned rand_value = 11;
	srand(time(0));
	for (int i = 0; i < rows; i++) //Заполнение массива
	{
		for (int j = 0; j < cols; j++)
		{
			arr_2D[i][j] = rand() % 50;
		}
	}

	ShowFirstArr(arr_2D, rows, cols);
	ChangeArr(arr_2D, rows, cols);

	for (int i = 0; i < rows; i++) //Вывод конечного массива
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr_2D[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Измененый массив массив" << endl;
}