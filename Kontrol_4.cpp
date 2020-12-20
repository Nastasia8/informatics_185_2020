#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter number"<<endl;
    int rows;
    int col;
    cin>>rows;
    cin>>col;
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
    {
   for (int j=0;j<col;j++)
   {
     if (arr[i][j] % 2 !=0)
     arr[i][j]=arr[i][j]+3;
   }
   cout<<endl;
    }
    for (int i=0;i<rows;i++)
    {
      for (int j=0;j<col;j++)
      {
       if (arr[i][j] % 2 ==0)
     arr[i][j]=arr[i][j]-1; 
      }
      cout<<endl;
    }
    for (int i=0;i<rows;i++)
    { for (int j=0;j<col;j++)
    cout<<arr[i][j]<<"\t";
    cout<<endl;
    }
    delete[] arr;
}