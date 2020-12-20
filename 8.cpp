#include <iostream>
#include <random>
using namespace std;

void set(int* mass, int n)
{
    for (int i = 0; i < n; i++)
    {
        mass[i] = rand() % 50;
    }

}
void show(int* mass, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
}
void max(int* mass, int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (mass[i] > x)
        {
            x = mass[i];
        }
    }
    cout << "max element = " << x;
}
int main()
{

    int n = 0;
    cout << "n = ";
    cin >> n;
    int* mass = new int[n];
    set(mass, n);
    show(mass, n);
    max(mass, n);
    delete[]mass;

}