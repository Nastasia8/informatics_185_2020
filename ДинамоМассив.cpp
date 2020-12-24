#include <iostream>

using namespace std;



int main()
{
    int min;
    int k;

    min = 1000;

    cout << "Введите размер массива" << endl;

    cin >> k;
    int arr[k] = {

    };
    if (k <= 1000 && k >= 1)

    {
        for (int n = 0; n < k; n++)

        {
            arr[n] = (rand() % 100);
            cout << arr[n] << "\t\n";
            if (arr[n] < min)
            {
                min = arr[n];
            }
        }
        cout << "Минимальное значение массива= " << min;
    }
    else {
        cout << "Данный размер не входит в область определения массива ";
    }
    return 0;
}