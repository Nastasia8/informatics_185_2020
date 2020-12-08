#include <iostream>
#include <ctime>
using namespace std;
class Massive
{
public:
    Massive(int row, int col)
    {
        this->row = row;
        this->col = col;
    }
    // Генерация двумерного динамиеского массива:
    void generate_massive_2();
    // Генерация одномерного динамиеского массива:
    void generate_massive_1();
    // Вывод
    void show_massive_1();
    void show_massive_2();
    void change_massive_2();
    // Очистка:
    void delet_massive();

private:
    int row;
    int col;
    int **arr;
    int *_arMax;
};
int main()
{
    Massive test = Massive(3, 3);
    test.generate_massive_2();
    test.generate_massive_1();
    test.show_massive_2();
    test.show_massive_1();
    test.change_massive_2();
    test.delet_massive();
    return 0;
}
// Генерация двумерного динамиеского массива:
void Massive::generate_massive_2()
{
    arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    srand(time(NULL));
    int secret = -15 + rand() % 31; //Числа от -15 до 15
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = secret;
            secret = -15 + rand() % 31;
        }
    }
}
// Генерация одномерного динамиеского массива(заполняю максимальными значениями среди четных значений матрицы):
void Massive::generate_massive_1()
{
    _arMax = new int[1];
    int max;
    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] % 2 == 0 && k == 0)
            {
                k += 1;
                max = arr[i][j];
            }
            if (arr[i][j] > max && arr[i][j] % 2 == 0)
            {
                max = arr[i][j];
            }
        }
    }
    _arMax[0] = max;
}
// Очистка:
void Massive::delet_massive()
{
    {
        for (int i = 0; i < row; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }
    delete[] _arMax;
}
//так и не понял, зачем одномерный массив, поэтому храню в нём максиальное значение среди четных чисел
void Massive::show_massive_1()
{
    cout << "max = " << _arMax[0] << endl;
}
void Massive::show_massive_2()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
// Замена отрицательных чисел на 0 и вывод полученной матрицы
void Massive::change_massive_2()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < 0)
            {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}