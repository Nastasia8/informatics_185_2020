#include <iostream>
#include <cmath>
using namespace std;
float perimetr(float a);
float perimetr(float a, float b);
float perimetr(float a, float b, float c, float d);
float square(float a);
float square(float a, float b);
float square(float a, float b, float h);
int main(){
    float pi = 3.14;
    float a;
    float b,c,d,h;
    cout << "enter the sides of the quadrate" << endl;
    cin >> a;
    cout << "square quadrate = " << square(a) << "\nperimetr quadrate = " << perimetr(a) << endl;
    cout << "enter R circle" << endl;
    cin >> a;
    cout << "square circle = " << square(pi,a) << "\nperimetr circle = " << perimetr(a,pi) << endl;
    cout << "enter the sides of the trapeze" << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    cout << "d:";
    cin >> d;
    cout << "h:";
    cin >> h;
    cout << "square trapeze = " << square(a,b,h) << "\nperimetr trapeze = " << perimetr(a,b,c,d) << endl;//123
}
float perimetr(float a){
    return 4*a;
}
float perimetr(float a, float pi){
    return 2*a*pi;
}
float perimetr(float a, float b, float c, float d){
    return a+b+c+d;
}
float square(float a){
    return a*a;
}
float square(float pi, float b){
    return pi*b*b;
}
float square(float a, float b, float h){
    return ((a+b)/2)*h;
}

float funslenght(float x, float y, float z)
{
	return(sqrt(x * x + y * y + z * z));
}