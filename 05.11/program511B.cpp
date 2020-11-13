#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Massive
{
public:
    Massive(int rows, int cols)
    {
        this -> rows = rows;
        this -> cols = cols;
    }
//Вывод двумерного массива
    void Show()
    {
        for (int i = 0; i < this -> rows; i++)
        {
            for (int j = 0; j < this -> cols; j++) 
            {   
                cout << array[i][j] << "\t";
            }
            cout << " " << endl;
        }
    }
//Генерация двумерного массива
    void generate2DimensionalArray()
    {
        array = new int*[rows]; 
        for (int i = 0; i < rows; i++)
        {
            array[i] = new int [cols];
            for (int j = 0; j < cols; j++) 
            {
                if (j % 2 == 0)
                {
                    array[i][j] = -1 * (rand() % 65);
                }
                else { array[i][j] = rand() % 65; }
            }
        }
    }
//Инициализация массива максимумов
    void generateMaxArray()
    {   
        arrMax[rows] = {};
        for (int i = 0; i < rows; i++)
        {
            arrMax[i] = -1000;
        }
    }
//Очищение памяти
    void destructArray()
    {
        for (int i=0; i < rows; i++)
        {
            delete [] array[i];
        }
        delete [] array;
    }
//Нахождение максимума среди чётных
    void findMaxEven()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++) 
            {   
                if ( arrMax[i] < array[i][j] && array[i][j] % 2 == 0)
                {
                    arrMax[i] = array[i][j];
                }
            }
        }
        cout << "Maxs in Evens: ";
        for (int i = 0; i < rows; i++)
        {
            cout << arrMax[i] << " ";
        }
        cout << endl;
    }
//Замена отрицательный на 0
    void replaceNegative()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++) 
            {
                if ( array[i][j] < 0)
                {
                    array[i][j] = 0;
                }
            }
        }
    }
private:
    int rows;
    int cols;
    int **array;
    int *arrMax;
};

int main()
{   
//Необходимые для создания действия
    srand(time(NULL));
    Massive arr(3, 3);
    arr.generate2DimensionalArray();
    arr.generateMaxArray();
//Action
    arr.Show();
    arr.findMaxEven();
    arr.replaceNegative();
    arr.Show();
    return 1;
}