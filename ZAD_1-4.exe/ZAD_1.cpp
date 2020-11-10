# include <iostream>
using namespace std;
void f(int *pa)
{
    (*pa)++;
}
int main ()
{
    int a=5;
    int *pa=&a;
    f(&a);
    cout<<a<<endl;
    return 0;
}