//Imports
#include <string>
#include <iostream>
#include <ctime>
using namespace std;
//Required class

class Massive
{
public:
    Massive(int rows, int cols)
    {   
        //Rows - number of integers in Line , Cols - number of integers in Columns 
        this -> rows = rows;
        this -> cols = cols;
    }
    //Method shows Common Matrix
    void ShowCommon()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++) 
            {   
                cout << array[i][j] << "\t";
            }
            cout << " " << endl;
        }
    }
    //Method shows Transposed Matrix. It don't change the array
    void ShowTransposed()
    {
        for (int i = 0; i < cols; i++)
        {
            for (int j = 0; j < rows; j++) 
            {   
                cout << array[j][i] << "\t";
            }
            cout << " " << endl;
        }
    }
    //Method generates 2 dimensional array and fill it with "random" numbers
    void generate2DimensionalArray()
    {
        array = new int*[rows]; 
        for (int i = 0; i < rows; i++)
        {
            array[i] = new int [cols];
            for (int j = 0; j < cols; j++)
            {
                array[i][j] = (rand() % 65);
            }
        }
    }
    //Method destructs dynamic array
    void destructArray()
    {
        for (int i=0; i < rows; i++)
        {
            delete [] array[i];
        }
        delete [] array;
    }
//Cols and rows are private variables
private:
    int rows;
    int cols;
    **array;
};

//Main function
int main()
{   
    srand(time(NULL));
    Massive arr(3, 2);
    arr.generate2DimensionalArray();
    cout << "Common matrix:" << endl;
    arr.ShowCommon();
    cout << "Now transposed:" << endl;
    arr.ShowTransposed();
    Massive arrB(3, 3);
    arrB.generate2DimensionalArray();
    cout << "Common matrix:" << endl;
    arrB.ShowCommon();
    cout << "Now transposed:" << endl;
    arrB.ShowTransposed();

    return 1;
}