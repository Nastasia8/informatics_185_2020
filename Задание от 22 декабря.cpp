#include <iostream>
using namespace std;
class Massive
{ 
    public:
    int**arr;
    int rows;
    int cols;
    int *arr1;
    int *arr2;
    Massive(int rows, int cols)
    {
        
        this -> cols = cols;
        this -> rows = rows;
        arr1 = new int [rows];
        arr2 = new int [cols];
        arr = new int*[rows];
        for (int i = 0; i < rows; i++)
        {
            arr[i] = new int[cols];
        }
    }
    void Zapol();
    void Chet();
    void Srzn();
    ~Massive ()
    { 
        for (int i = 0; i < rows; i++)
        {
            delete [] arr[i];
        }
        delete [] arr;
        delete [] arr1;
        delete [] arr2;
    }
};
void Massive::Zapol()

{
    for ( int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand()%50;
        }
    }
    for ( int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
    cout << "\n";
    }
}

void Massive::Chet()
{ 
    int s;
    for (int i = 0; i < rows; i++)
    {
        s = 0;
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] % 2 == 0)
            s = s + arr[i][j];
        }
        arr1[i] = s;
    }
    for (int i = 0; i < rows; i++)
    {
        cout << arr1[i] << "\t";
    }
}

void Massive::Srzn()
{
    int sr;
    int sum;
    for (int j = 0; j < cols; j++)
    {
        sr = 0;
        sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum = sum + arr[i][j];
        }
        sr = sum / cols;
        arr2[j] = sr;
    }
    for (int j = 0; j < cols; j++)
    {
        cout << arr2[j] << "\t";
    }
}

int main()
{ 
    int cols;
    int rows;
    cout << "Input rows" << endl;
    cin >> rows;
    cout << "Input cols" << endl;
    cin >> cols;
    Massive massive1(rows, cols);
    massive1.Zapol();
    cout << endl;
    massive1.Chet();
    cout << endl;
    massive1.Srzn();
}