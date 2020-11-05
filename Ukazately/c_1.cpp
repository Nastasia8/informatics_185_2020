#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int n;
    int min;
    cout << "n:";
    cin >> n;
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = secret;
        secret = rand() % 100 + 1;
        min = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl;
    cout << "min = " << min;
    delete[] arr;
    return 0;
}
