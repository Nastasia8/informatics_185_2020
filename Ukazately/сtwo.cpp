#include <iostream>
#include <ctime>
using namespace std;
void generate_massive(int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = secret;
        secret = rand() % 100 + 1;
    }
}
int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    int *arr = new int[n];
    generate_massive(n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}