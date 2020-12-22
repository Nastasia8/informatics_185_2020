#include <iostream>
#include <random>
using namespace std;

void show(int row,int col,int **massiv)
{
    srand( time(0) );
    for ( int i = 0; i < row; i++)
    for ( int j = 0; j < col; j++)
    massiv[i][j] = rand() % 30;
}

void show1(int row,int col,int **massiv)
{
    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        cout << massiv[i][j] << "\t";
        cout << endl;
    }
}

void max (int row,int col,int n, int **massiv,int *arr)
{
    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            if (massiv[i][j] > n)
            {
                n = massiv[i][j];
            }
        }
        cout << "наибольшее = " << n << endl;
        arr[i] = n;
        n = 0;
    }
}

void massmax(int row,int *arr)
{
    for(int i = 0; i < row; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
    int n = 0;
    int row,col;
    cout << "строка = ";cin >> row;
    cout << "столбец = ";cin >> col;
    
    int *arr = new int [row];
    
    int **massiv = new int *[row];
    for (int i = 0; i < row;i++)
    massiv[i] = new int [col];
    
    show(row,col,massiv);
    show1(row,col,massiv);
    max(row, col,n,massiv,arr);
    
    cout << endl;
    cout << "наибольшее в массиве" << endl;
    
    massmax ( row, arr);

    for ( int i = 0; i < row; i++)
    {
        delete [] massiv[i];
        delete [] massiv;
    }
    delete [] arr;
}