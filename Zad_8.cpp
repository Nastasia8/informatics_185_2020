#include <iostream>

using namespace std;
void zapol_arr(int size,int *arr)
{
for (int i=0;i<size;i++)
{
arr[i]=rand()%25;
}
}
void show_arr(int *arr,int size )
{
for (int i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}
}

void max_arr(int *arr,int size){
int max=arr[0];
for (int i=0;i<size;i++){
if (max<arr[i])
max= arr[i];
}
cout<<"max in arr"<<max;
}
int main()
{
int size;
cout<<"size arr:";
cin>>size;
int *arr =new int [size];
zapol_arr(size,arr);
show_arr(arr,size);
max_arr(arr, size);
}