#include <iostream>
#include <math.h>
using namespace std;

void Maytnik(float l,float m){
cout<<"Fizik"<<endl;
float T,w;
T=2*M_PI*sqrt(l/(9.8*m));
cout <<"Period "<<T<<endl;
w=1/sqrt(l/m);
cout <<"Chastota "<<w<<endl;
}

void Maytnik(float l){
cout<<"Math"<<endl;
float T,w;
T=2*M_PI*sqrt(l/9.8);
cout <<"Period "<<T<<endl;
w=sqrt(9.8/l);
cout <<"Chastota "<<w<<endl;
}

void Maytnik(float m,float k,float pi){
cout<<"Pryzina"<<endl;
float T,w;
T=2*pi*sqrt(m/k);
cout <<"Period "<<T<<endl;
w=sqrt(k/m);
cout <<"Chastota "<<w<<endl;
}
  

int main() {
float l,m,k;
float const pi=3.14;
cout <<endl<<"l ";cin >>l;
cout <<endl<<"mass ";cin >>m;
cout <<endl<<"k ";cin >>k;
Maytnik(m, k);
Maytnik(l);
Maytnik( m, k, pi);
  return 0;
}