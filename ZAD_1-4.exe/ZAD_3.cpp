#include <iostream>
using namespace std;
int main()
{
    int size =0;
    cout <<"enter size=";
    cin>>size;
    int *arr=new int [size];
    for (int i=0;i<size; i++)
    arr[i]=rand() %20;
    for (int i=0;i<size;i++)
    cout <<*(arr+i)<<endl;
    int min=arr[0];
    for (int i=0;i<size; i++)
    {
        if (arr[i]<min)
        {min=arr[i];}
    }
    cout<<min<<endl;
    delete[] arr;
    return 0;

}