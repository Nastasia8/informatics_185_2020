#include <iostream>
#include <ctime>
using namespace std;

void findMax(int ** arr, int rows, int cols, int *_arrMax)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {   
            if (_arrMax[i] < arr[i][j])
            {
                _arrMax[i] = arr[i][j];
                //result[i] = _arrMax[i];
            }
        }
    }
    cout << "Maxs: ";
    for (int i = 0; i < rows; i++)
    {
        cout << _arrMax[i] << " ";
    }
}
int main()
{
    int rows, cols;
    cout << "Rows:";
    cin >> rows;
    cout << "Cols:";
    cin >> cols;
    int max[3] = {-1000, -1000, -1000};
    srand(time(NULL));

    //Создание указателя на массив указателей
    int **arr = new int*[rows];

    //Объявление вложенных массивов
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int [cols];
        for (int j = 0; j < cols; j++) 
        {
            arr[i][j] = (rand() % 65);
        }
    }
    //Вывод массива
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {   
            cout << arr[i][j] << "\t";
        }
        cout << " " << endl;
    }
    // Вывод max
    findMax(arr, rows, cols, max);
    // Очищние памяти
    for (int i=0; i < rows; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}