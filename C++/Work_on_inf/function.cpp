#include "function.h"
#include "objects.h"
#include <iostream>
#include <cmath>
using namespace std;
void def(){
    for(float x = 1.81f; x<=5.31f; x+=0.7f){
        cout << pow((abs(a-b*x)/(pow(log10(x),3))), 1.0/2.0)<< endl;
    }
}
void def(float x1, float x2, float x3, float x4, float x5, int c){
    float numbers[]={x1, x2, x3, x4, x5};
    for (int i = 0; i < c; i++){
        cout << pow((abs(a-b*numbers[i])/(pow(log10(numbers[i]),3))), 1.0/2.0)<< endl;
    }
}