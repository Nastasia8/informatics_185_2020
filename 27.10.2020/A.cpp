#include <iostream>

using namespace std;

void notMain(int* x, int* y, int* z)
{
    *(x) = *(x) % 10;
    *(y) += 2;
    *(z) = *(z) / 3;
    cout << *x << "\n" << *y << "\n" << *z << endl;
}


int main()
{
    int x = 69;
    int y = 418;
    int z = 15;
    int* new_x = &x;
    int* new_y = &y;
    int* new_z = &z;
    notMain(new_x, new_y, new_z);
    return 0;
}
