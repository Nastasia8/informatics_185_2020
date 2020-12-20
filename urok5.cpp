#include <iostream>
#include <cmath>
using namespace std;
float comp(float l, float g){
    return 2*3.14*sqrt(l/g);
}
 float comp (float m, float l, float g, float i){
     return 2*3.14*sqrt(l/(l*m*g));
 }
 int main(){
     float i=9;
     float m=18;
     const float g=9.8;
     const float p=3.14;
     float l=11;
     cout << "Formula kolebaniya matimaticheskogo mayatnika= " << comp(i,g) << endl;
     cout << "fizicheskiy mayatnik= " << comp(m,i,g,l) << endl;
    // <3
 }