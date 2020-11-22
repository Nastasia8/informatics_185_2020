#include <iostream>
 
int main()
{
    int value = 5;
    int *ptr = &value; 
    int b=*ptr+20;
    std::cout << "b: " << b << std::endl;
    return 0;
}