#include <iostream>
#include <ctime>
using namespace std;
void proiz(int **arr_1, int **arr_2, int r, int c, int col)
{
    int s = 0;
    int **arr_3 = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr_3[i] = new int[col];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int x = 0; x < c; x++)
            {
                s += arr_1[i][x] * arr_2[x][j];
            }
            arr_3[i][j] = s;
            s = 0;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr_3[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < r; i++)
    {
        delete[] arr_3[i];
    }
    delete[] arr_3;
}
int main()
{
    srand(time(NULL));
    int r, c, row, col;
    cout << "r = ";
    cin >> r;
    cout << endl;
    cout << "c =";
    cin >> c;
    cout << endl;
    cout << "row =";
    cin >> row;
    cout << endl;
    cout << "col =";
    cin >> col;
    cout << endl;
    if (c != row)
    {
        cout << "Error";
        exit(0);
    }
    //Первый массив
    int **arr_1 = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr_1[i] = new int[c];
        for (int j = 0; j < c; j++)
        {
            arr_1[i][j] = rand() % 6;
            cout << arr_1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "-------------" << endl;
    //Второй массив
    int **arr_2 = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr_2[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            arr_2[i][j] = rand() % 6;
            cout << arr_2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "-------" << endl;
    proiz(arr_1, arr_2, r, c, col);
    for (int i = 0; i < r; i++)
    {
        delete[] arr_1[i];
    }
    delete[] arr_1;
    for (int i = 0; i < row; i++)
    {
        delete[] arr_2[i];
    }
    delete[] arr_2;
    return 0;
}
