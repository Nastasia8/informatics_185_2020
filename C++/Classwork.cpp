#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int n;
    int proisvedenie = 1;
    cout << "Matricha n*n, enter n:\n";
    cin >> n;
    int b = n - 1;
    cout << endl;
    int numbers[3][3];
    int sum = 0;
    srand(time(NULL));
    int secret = rand() % 10 + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            numbers[i][j] = secret;
            cout << numbers[i][j] << "\t";
            secret = rand() % 10 + 1;
        }
        cout << endl;
    }
    for (int k = 0; k < n; k++)
    {
        sum += numbers[k][k];
    }
    for (int a = 0; a < 3; a++)
    {
        proisvedenie *= numbers[a][b];
        b = b - 1;
    }
    cout << "Summa:\n"
         << sum << endl;
    cout << "proisvedenie:\n"
         << proisvedenie << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (numbers[i][j] % 2 == 0)
            {
                numbers[i][j] = 0;
            }
            cout << numbers[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
