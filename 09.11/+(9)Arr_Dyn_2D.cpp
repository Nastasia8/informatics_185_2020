#include <iostream>
#include <ctime>
#include <random>

using namespace std;

void findMin(int min, int *arr_2D, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr_2D[j] < min)
				min = arr_2D[j];
		}
		cout << "\nMin in this col is " << min << "\t" << endl;
	}
}

int main()
{
	int rows; //Ввод строк
	cout << "Enter value of rows in array = " << endl;
	cin >> rows;

	int cols; //Ввод столбцов
	cout << "\nEnter valuse of cols in array = " << endl;
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

	for (int i = 0; i < rows; i++) //Вывод массива
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr_2D[i][j] << "\t";
		}
		cout << endl; 
	}

	int min = 2147483647;

	findMin(min, *arr_2D, rows, cols);


	for (int i = 0; i < rows; i++) //Освобождение памяти
	{
		delete[] arr_2D[i];
	}

	delete[] arr_2D;
}

//Не понимаю почему у меня находит минимальное значение только самой первой строки. Дедлайн уже просрочен, поэтому пришлось кидать так :(