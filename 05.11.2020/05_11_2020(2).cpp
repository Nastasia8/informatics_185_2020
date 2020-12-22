#include <iostream>

using namespace std;

class Array
{
public:
    Array(int rows, int columns)
    {
        this->rows = rows;
        this->columns = columns;
    }
    void ShowArr()
    {
        for (int i = 0; i < this->rows; i++)
        {
            for (int j = 0; j < this->columns; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    void genArr()
    {
        arr = new int* [rows];
        for (int i = 0; i < rows; i++)
        {
            arr[i] = new int[columns];
            for (int j = 0; j < columns; j++)
            {
                if (j % 2 != 0)
                {
                    arr[i][j] = (rand() % 100);
                }
                else { arr[i][j] = -1 * (rand() % 100); }
            }
        }
    }
    void genMinArr()
    {
        arrMin[rows] = {};
        for (int i = 0; i < rows; i++)
        {
            arrMin[i] = 100;
        }
    }
    void destructArr()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }
    void findMin()                                                                     //Простите меня за всю бездарность, но в "Mins:" (68 - 73) выводятся лишь присвоенное arrMin ранее "100"
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (arrMin[i] < arr[i][j] && arr[i][j] % 2 != 0)
                {
                    arrMin[i] = arr[i][j];
                }
            }
        }
        cout << "\n_____________________________\n\n" << "Mins: ";
        for (int i = 0; i < rows; i++)
        {
            cout << arrMin[i] << "\t";
        }
        cout << "\n_____________________________\n\n";
    }
    void Swap_Zero()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (arr[i][j] < 0)
                {
                    arr[i][j] = 0;
                }
            }
        }
    }
private:
    int rows;
    int columns;
    int** arr;
    int* arrMin;
};

int main()
{
    Array arr(3, 3);
    arr.genArr();
    arr.genMinArr();
    arr.ShowArr();
    arr.findMin();
    arr.Swap_Zero();
    arr.ShowArr();
    return 0;
}