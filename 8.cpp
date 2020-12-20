#include <iostream>
#include <random>
using namespace std;

void set(int *arr,int n)
{
    for (int i = 0; i < n;i++)
    {
        arr[i] = rand() % 50;
    }

}
void show(int * arr,int n)
{
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void max(int * arr,int n)
{
    int x = 0;
    for (int i = 0; i < n;i++)
    {
        if(arr[i] > x)
        {
            x = arr[i];
        }
    }
    cout << "max = " << x;
}
int main() 
{
    int n = 0;
    cout << "n = ";
    cin >> n;
    int * arr = new int [n];
    set (arr,n);
    show(arr,n);
    max(arr,n);
    delete []arr;
}