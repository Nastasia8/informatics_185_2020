#include <iostream>
#include <ctime>

using namespace std;

void fillArray(int *pArr, int size)
{   
    for (int i = 0; i < size; i++)
    {
        pArr[i] = (rand() % 99);
    }
}

void showArray(int *pArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << pArr[i] << "\t";
    }
}

void findMin(int *pArr, int size, int min)
{   
    for (int i = 0; i < size; i++)
    {
        if (pArr[i] < min)
        {
            min = pArr[i];
        }
    }
    cout << "Min:" << min << endl;
}

int main()
{   

    int min = 100;
    int n;
    cout << "N:";
    cin >> n;
    int array[n] = {};
    int *pArr = array;
    srand(time(NULL));

    fillArray(pArr, n);
    showArray(pArr, n);
    findMin(pArr, n, min);

    return 1;
} 