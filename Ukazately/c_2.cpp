#include <iostream>
#include <ctime>
using namespace std;
//Генерация массива
void generate_massive(int arr[], int n)
{
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    for (int i = 0; i < n; i++)
    {
        *(arr + i) = secret;
        secret = rand() % 100 + 1;
    }
}
//Вывод массива
void show_massive(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}
//Нахождения min знач
int min_of_arr(int *arr, int n, int &m)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            m = *(arr + i);
        }
        if (arr[i] < m)
        {
            m = arr[i];
        }
    }
    cout << "min = " << m << endl;
    return m;
}
int main()
{
    int n, m;
    m = 2020;
    cout << "n = ";
    cin >> n;
    int *arr = new int[n];
    generate_massive(arr, n);
    show_massive(arr, n);
    min_of_arr(arr, n, m);
    return 0;
}