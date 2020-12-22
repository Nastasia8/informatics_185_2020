#include <iostream>

using namespace std;

class Array
{
    public:
    int** arr;
    int rows;
    int columns;
    int* even_arr;
    int* AV_arr;
    Array(int rows, int columns)
    {
        this->columns = columns;
        this->rows = rows;
        even_arr = new int[rows];
        AV_arr = new int[columns];
        arr = new int* [rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[columns];
        }
    }
    void Filling();
    void SumOfEven();
    void AverageValue();
    void MatrixTranspose();
    ~Array()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
        delete[] even_arr;
        delete[] AV_arr;
    }
};

void Array::Filling()

{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = rand() % 50;
        }

    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}

void Array::SumOfEven()
{
    int s;
    for (int i = 0; i < rows; i++)
    {
        s = 0;
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] % 2 == 0)
                s = s + arr[i][j];
        }
        even_arr[i] = s;
    }
    cout << "Sums of even numbers\n\n";
    for (int i = 0; i < rows; i++)
    {
        cout << even_arr[i] << "\t";
    }
}

void Array::AverageValue()
{
    int AV;
    int sum;
    for (int j = 0; j < columns; j++)
    {
        AV = 0;
        sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += arr[i][j];
        }
        AV = sum / columns;
        AV_arr[j] = AV;
    }
    cout << "\nAverage values\n\n";
    for (int j = 0; j < columns; j++)
    {
        cout << AV_arr[j] << "\t";
    }
}

void Array::MatrixTranspose()
{
    cout << "\nTranspose matrix A\n\n";
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr[j][i] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    int columns;
    int rows;
    cout << "Enter the number of columns: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout << "\n";
    Array firstArray(rows, columns);
    cout << "Matrix A, btw\n\n";
    firstArray.Filling();
    cout << "\n";
    firstArray.SumOfEven();
    cout << "\n";
    firstArray.AverageValue();
    cout << "\n";
    firstArray.MatrixTranspose();
    cout << "\n";
    Array secondArray(rows, columns);
    cout << "Matrix B, btw\n\n";
    secondArray.Filling();
    cout << "\nSum of matrices(A + B)\n\n";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++)
        {
            cout << firstArray.arr[i][j] + secondArray.arr[i][j] << "\t";
        }
        cout << "\n";
    }
}