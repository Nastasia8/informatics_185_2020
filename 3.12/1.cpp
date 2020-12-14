#include <iostream>

using namespace std;

class Figure {

public: 
virtual void s()=0;
virtual void p()=0;

};

class Triangle : public Figure {
private: 
float a,b,c;

public:
Triangle (float a, float b, float c){
this->a=a;
this->b=b;
this->c=c;
}
void message (){
cout<< "Triangle:"<< endl;
}
void s () override {
    cout << "S=" << (a*b/2)<< endl;
}
void p() override
{
    cout << "P=" << (a+b+c)<< endl;
}

};

class Rectangle : public Figure {
float a,b,c,d;

public:
Rectangle (float a, float b, float c, float d){
this->a=a;
this->b=b;
this->c=c;
this->d=d;
}

void message (){
cout<< "Rectangle"<< endl;
}
void s () override {
    cout << "S=" << (a*b)<< endl;
}
void p () override {
    cout << "P=" << (a+b+c+d)<< endl;
}

};

class Trapezoid : public Figure {
float a,b,c,d,h;

public:
Trapezoid (float a, float b,float c, float d,float h){
this->a=a;
this->b=b;
this->c=c;
this->d=d;
this->h=h;
}
void message (){
cout<< "Trapezoid" << endl;
}
void s () override {
    cout << "S=" << (a*b/2)*h<< endl;
}
void p () override {
    cout << "P=" << a+b+c+d<< endl;
}

};

class Circle : public Figure {
float r;
const float pi = 3.14;
public:
Circle (float r){
this->r=r;


}
void message (){
cout<< "Circle:"<< endl;
}
void s () override {
    cout << "S=" << (pi*r*r)<< endl;
}
void p () override {
    cout << "P=" << (2*pi*r)<< endl;
}

};

int main () {

Triangle treug (3,4,5);
treug.message();
treug.s();
treug.p();

Circle circl (20);
circl.s();
circl.p();

Rectangle recatang (3,5,3,5);
recatang.message();
recatang.s();
recatang.p();

Trapezoid trap (1,7,5,6,3);
trap.message();
trap.s();
trap.p();
return 0;
}
