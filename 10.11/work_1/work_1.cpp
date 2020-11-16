#include <iostream>
#include <ctime>
using namespace std;
class Massive
{
public:
    void setCol(int col);    // столбцы
    void setRow(int row);    // сроки
    void showMassive();      //вывод массива
    void trance();           //генерация и вывод транспонированного массива (использую ещё один массив)
    void cleaning();         //очистка
    void generate_massive(); //генерация массива

private:
    int row;
    int col;
    int **arr;
    int **arr_tr;
};
int main()
{
    int row, col;
    cout << "row: ";
    cin >> row;
    cout << endl;
    cout << "col: ";
    cin >> col;
    cout << endl;
    Massive first;
    first.setRow(row);
    first.setCol(col);
    first.generate_massive();
    first.showMassive();
    first.trance();
    first.cleaning();
    return 0;
}
void Massive::generate_massive()
{
    srand(time(NULL));
    arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = -15 + rand() % 31;
        }
    }
}
void Massive::showMassive()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
}
void Massive::trance()
{
    arr_tr = new int *[col];
    for (int i = 0; i < col; i++)
    {
        arr_tr[i] = new int[row];
    }
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            arr_tr[j][i] = arr[i][j];
            cout << arr_tr[j][i] << "\t";
        }
        cout << endl;
    }
}
void Massive::cleaning()
{
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    for (int i = 0; i < row; i++)
    {
        delete[] arr_tr[i];
    }
    delete[] arr_tr;
}
void Massive::setCol(int col)
{
    this->col = col;
}
void Massive::setRow(int row)
{
    this->row = row;
}