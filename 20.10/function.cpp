#include <iostream>
#include <cmath>
#include <stdio.h>
#include "function.h"
#include "objects.h"

using namespace std;

void task (const float a, const float b){
cout << "First task:" << endl;
  for ( float x=1.1; x<3.7;x+=0.5){
      
      cout << "x=" <<x<< " y=" << pow((a+b*x),2.5)/(1+log10(a+b*x)) <<endl;

    }
}

void task (const float arr[5],const float a,const float b ){
  cout << "Second task"<<endl;

for (int v=0;v<5;v++) {
   
    cout <<"x" <<v+1<< "=" << arr[v]<< " y="<< pow((a+b*arr[v]),2.5)/(1+log10(a+b*arr[v])) <<endl;
}
}