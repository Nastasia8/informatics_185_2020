#include <iostream>
#include <random>
#include <string>
using namespace std;

void del(int **arr,int r,int c){
  for  ( int i=0; i < r; i++)
   delete [] arr[i];
   delete [] arr;
   cout <<"delete"<<endl;
}
void show(int **arr,int r,int c){
  for ( int i=0; i < r; i++){
    for ( int j=0; j < c; j++){
      cout <<arr[i][j] <<" ";}
      cout<<endl;}

    cout<<endl;
}

int main() {
srand(time(0));
int r,c,row,col,x,n,l;
x=0;
n=0;
cout <<"r = ";
cin >>r;
cout <<"c = ";
cin >>c;
cout <<"row = ";
cin >>row;
cout <<"col = ";
cin >>col;

 int **arr = new int *[r];
 for (int i=0; i<r;i++)
arr[i]=new int [c];

for ( int i=0; i < r; i++)
    for ( int j=0; j < c; j++)
      arr[i][j]= rand() % 5+1;


 int **arr2 = new int *[row];
 for (int i=0; i<row;i++)
arr2[i]=new int [col];

 for ( int i=0; i < row; i++)
    for ( int j=0; j < col; j++)
      arr2[i][j]= rand() % 5+1;

int **arr3 = new int *[r];
 for (int i=0; i<r;i++)
arr3[i]=new int [r];

show(arr,r,c);
show(arr2,row,col);

if (c==row){
   for (int k=0; k<r;k++){
  for ( int i=0; i < col; i++){
    arr3[k][i]=0;
    for ( int j=0; j < c; j++)
      arr3[k][i]+=arr[k][j]*arr2[j][i];
      
      
      }

}

};
cout << "matriza ymnozenie"<<endl;
show(arr3,r,r);

del(arr,r,c);
del(arr2,row,col);
del(arr3,r,r);

  return 0;
}