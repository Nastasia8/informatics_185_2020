#include <iostream>
#include <ctime>

using namespace std;

void fillArray(int *pArray, int size)
{   
    for (int i = 0; i < size; i++)
    {
        pArray[i] = (rand() % 65);
    }
}

void showArray(int *pArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << pArray[i] << "\t";
    }
}

void findMin(int *pArray, int size, int min)
{   
    for (int i = 0; i < size; i++)
    {
        if (pArray[i] < min)
        {
            min = pArray[i];
        }
    }
    cout << "Min:" << min << endl;
}

int main()
{   
    // max - 64
    int min = 100;
    int n;
    cout << "N:";
    cin >> n;
    int array[n] = {};
    int *pArray = array;
    srand(time(NULL));

    fillArray(pArray, n);
    showArray(pArray, n);
    findMin(pArray, n, min);

    return 1;
}