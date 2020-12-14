#include <iostream>
#include <random>
using namespace std;

int main() 
{
    int row = 5;
    int col = 5;
    int a = -1;
    int mass[row][col];
    for (int i = 0; i < row;i++)
    srand( time(0) );

    for ( int i = 0; i < row; i++)
    for ( int j = 0; j < col; j++)
    mass[i][j] = rand() % 10;
    for ( int i = 0; i < row; i++){
    for ( int j = 0; j < col; j++){
    cout << mass[i][j] << " ";}
    cout << endl;
}

for ( int i = 0; i < row; i++)
{
    for ( int j = 0; j < col; j++)
    if(mass[j][i] > a)
    {
        a = mass[j][i];
    }
cout << "max in col = " << a << endl;
}
a = -1;
}
