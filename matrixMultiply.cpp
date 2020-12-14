#include <iostream>
#include <ctime>

using namespace std;    

void fillMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int [cols];
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = (rand() % 9);
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void multiplyMatrix(int **matrix1, int **matrix2, int r, int c, int row, int col)
{
    int intermediate = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < c; k++)
            {
                intermediate += matrix1[i][k] * matrix2[k][j];
            }
            cout << intermediate << "\t";
            intermediate = 0;
        }
        cout << endl;
    }
}

int main()
{
    srand(time(NULL));
    int r, c, row, col;
    cout << "First matrix row:";
	cin >> r;
    cout << "First matrix col:";
	cin >> c;
	cout << "Second matrix row:";
	cin >> row;
	cout << "Second matrix col:";
	cin >> col;
    cout << "Inputed" << endl;
    int **matrix1 = new int *[r];
    int **matrix2 = new int *[row];
    cout << "Created" << endl;
    cout << "First matrix:" << endl;
    fillMatrix(matrix1, r, c);
    cout << "Second matrix:" << endl;
    fillMatrix(matrix2, row, col);
    cout << "Filled" << endl;
    multiplyMatrix(matrix1, matrix2, r, c, row, col);
    cout << "Multiplied" << endl;
}   