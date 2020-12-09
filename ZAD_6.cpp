#include <iostream>
using namespace std;
int main()
{
int value = 5;
int *ptr = &value;
int b=*ptr+20;
cout « b « endl;
return 0;
}