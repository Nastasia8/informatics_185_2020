#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
// Заполнения массвива максимальными значениями в строках и его вывод
void FindMax(int **arr, int rows, int cols, int *_arMax)
{
    int max;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j == 0)
            {
                max = arr[i][j];
            }
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
        _arMax[i] = max;
    }
    for (int i = 0; i < rows; i++)
    {
        cout << "String(" << i + 1 << ") max = " << _arMax[i] << endl;
    }
}
int main()
{
    int max, col, rows;
    srand(time(NULL));
    int secret = rand() % 20 + 1; //Числа от 1 до 20
    cout << "Strings:";
    cin >> rows;
    cout << endl;
    cout << "Columns:";
    cin >> col;
    cout << endl;
    //Инитиализация динамического массива (двумерного)
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[col];
    }
    //Инициальзация второго массива (одномерного) (arr_max_numbers)
    int *arr_max_numbers = new int[rows];
    // Заполнение и вывод массива
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = secret;
            cout << arr[i][j] << "\t";
            secret = rand() % 20 + 1;
        }
        cout << endl;
    }
    //Поиск максисального значения
    FindMax(arr, rows, col, arr_max_numbers);
    // Очистка(1)
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    //Очистка(2)
    delete[] arr_max_numbers;
    return 0;
}