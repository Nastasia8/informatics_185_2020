#include <iostream>

using namespace std;



int main()
{
    int min, n;
    min = 100;
    cout << "Array size can only be in the range from 1 to 100\n" << "Enter array size\n";
    cin >> n;
    int *arr = new int[n];
    if (n <= 100 && n >= 1) {
        for (int i = 0; i < n; i++)
        {
            arr[i] = (rand() % 100);
            cout << arr[i] << " ";
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        cout << "\n" << "Minimum array value is " << min;
    }
    else {
        cout << "You entered the wrong array size\n";
    }
    delete [] arr;
    return 0;
}