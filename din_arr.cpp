#include <iostream>
#include <random>
using namespace std;


void fun(int rows,int col,int **arr){
 srand( time(0) );
 for ( int i=0; i < rows; i++)
    for ( int j=0; j < col; j++)
       arr[i][j]= rand() % 30;
       
}
void fun2(int rows,int col,int **arr){
for  ( int i=0; i < rows; i++){
   for ( int j=0; j < col; j++)
       cout << arr[i][j] << "\t";
    cout << endl;
}
}

void fun3(int rows, int col,int n,int **arr){
for  ( int i=0; i < rows; i++){
   for ( int j=0; j < col; j++){
       if (arr[i][j] > n){
         n=arr[i][j];
         
       }
   }
    
    }
cout << "MAX из элементов = " << n <<endl;
n=0;
}
void fun4 (int rows,int col,int n, int **arr,int *arr2){
for  ( int i=0; i < rows; i++){
   for ( int j=0; j < col; j++){
       if (arr[i][j] > n){
         n=arr[i][j];
         
       }
       
   }
    cout << "MAX из строки = " << n <<endl;
    arr2[i]=n;
       n=0;
    }
}
void fun5(int rows,int *arr){
for(int i=0; i < rows; i++)
{
  cout << arr[i] <<"\t";
}
}


int main() {
  int n=0;
  int rows;
  int col;
  

  cout << "rows = ";
  cin >> rows;

  cout << "col = ";
  cin >> col;

int *arr = new int [rows];

 int **arr2 = new int *[rows];
 for (int i=0; i<rows;i++)
 arr2[i]=new int [col];


fun(rows,col,arr2);
fun2(rows,col,arr2);
fun3( rows, col,n,arr2);
fun4 (rows, col,n,arr2,arr);

cout <<endl;
cout << "массив с MAX значениями: " <<endl;

fun5 ( rows, arr);

for  ( int i=0; i < rows; i++)
   delete [] arr2[i];
   delete [] arr2;



delete [] arr;
}
