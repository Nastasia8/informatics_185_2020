#include <iostream>
#include <cmath>
#include "function.h"
using namespace std;
int main(){
    //{2.4f, 2.8f, 3.9f, 4.7, 3.16}
    float numbers[] = {2.4f, 2.8f, 3.9f, 4.7f, 3.16f};
    int y;
    y = sizeof(numbers)/4;
    def(numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], y);
    return 0;

}