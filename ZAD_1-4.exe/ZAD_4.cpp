#include <iostream>
using namespace std;
int main()
{
    int rows=3;
    int col=4;
    int **arr=new int*[rows];
    for (int i=0;i<rows;i++)
    arr[i]=new int [col];
    for (int i=0;i<rows;i++)
   for (int j=0;j<col;j++)
   arr[i][j]=rand()%10 ;
    for (int i=0;i<rows;i++)
    { for (int j=0;j<col;j++)
    cout<<arr[i][j]<<"\t";
    cout<<endl;

    }
 for (int i=0;i<rows;i++)
 delete[] arr[i];
 delete[] arr;
 return 0;
}