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
    cout << "Vvedite storony kvadrata" << endl;
    cin >> a;
    cout << "square kvadrata = " << square(a) << "\nperimetr kvadrata = " << perimetr(a) << endl;
    cout << "Vvedite R kruga" << endl;
    cin >> a;
    cout << "square kruga = " << square(pi,a) << "\nperimetr kruga = " << perimetr(a,pi) << endl;
    cout << "Vvedite storoni trapecii(a,b - storoni osnovaniya) i visoty" << endl;
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
    cout << "square trapecii = " << square(a,b,h) << "\nperimetr trapecii = " << perimetr(a,b,c,d) << endl;//123
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