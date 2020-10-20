#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;
float trap(float x, float y, float z){       //площадь трапеции
    return (1.0/2*(x+y)*z);
}
float trap(float a, float b, float c, float d){     //пириметр трапеции
    return (a+b+c+d);
}
float krug(float x){        //пириметр окружности
    return (2*x*M_PI);
}
float krug(float x, float y){       //полощадь окр
    return (M_PI*pow(x, y));
}
float kvd(float x){          //пириметр квадарата
    return (4*x);
}
float kvd(float x, float y){         //площадь квадрата
    return pow(x, y);
}
int main(){
    float kv = 2;
    int k;
    float a, b, c, d, h;
    cout << "Figure(1-trapechia, 2-krug, 3-kvadrat)" << endl;
    cin >> k;
    if (k==1){
        cout << "Enter the height first, the base of the trapezoid, and then its sides"<< endl;
        cin >> h >> a >> b >> c >> d;
        cout << "P="<< trap(a, b, c, d)<< endl;
        cout << "S=" << trap(a, b, h)<< endl; 
    }
    if (k == 2){
        cout << "R = ";
        cin >> a;
        cout << "P=" << krug(a) << endl;
        cout << "S=" << krug(a, kv) << endl;
    }
    if (k == 3){
        cout << "a = ";
        cin >> a;
        cout << "P=" << kvd(a) << endl;
        cout << "S=" << kvd(a, kv) << endl;
    }
        return 0;
    }
