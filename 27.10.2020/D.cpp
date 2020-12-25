#include <iostream>

using namespace std;

void fillArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % 100);
    }
}

void showArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void searchMin(int* arr, int size, int min)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "\n" << "Minimum array value is " << min;
}

int main()
{
    int min, size;
    min = 100;
    cout << "Array size can only be in the range from 1 to 100\n" << "Enter array size\n";
    cin >> size;
    int* arr = new int[size];
    int*& pArr = arr;
    fillArray(arr, size);
    showArray(arr, size);
    searchMin(arr, size, min);
    return 0;
}