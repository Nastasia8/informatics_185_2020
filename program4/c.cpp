#include <iostream>
#include <ctime>

using namespace std;



int main()
{   
    // max - 64
    int min = 100;
    int n;
    cout << "N:";
    cin >> n;
    int array[n] = {};
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        array[i] = (rand() % 65);
        cout << array[i] << endl;
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "Min:" << min;

    return 1;
}