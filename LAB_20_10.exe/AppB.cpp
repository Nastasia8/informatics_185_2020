#include <iostream>
#include <cmath>
#include "function.h"
using namespace std;
int main(){
    float numbers[] ={0.1f, 0.3f, 0.4f, 0.45f, 0.65f};
    int y;
    y = sizeof(numbers)/4;
    def(numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], y);
    return 0;
}