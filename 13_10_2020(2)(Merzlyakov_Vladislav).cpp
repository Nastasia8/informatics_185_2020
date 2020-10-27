#include <iostream>
#include <cmath>
using namespace std;

void s(float, float);
void p(float, float);
void s(float);
void p(float);
void s(float, float, float);
void p(float, float, float, float);
float r, h, a, b, c, d, f; 
float PI = 3.1415;

int main() {
    cout << "Circle radius = ";
    cin >> r;
    cout << "Square side = ";
    cin >> a;
    cout << "First trapezoid basis = ";
    cin >> b;
    cout << "Second trapezoid basis = ";
    cin >> f;
    cout << "First trapezoid side = ";
    cin >> c;
    cout << "Second trapezoid side = ";
    cin >> d;
    cout << "Trapezoid height = ";
    cin >> h;
    cout << "___________________________" << endl;
    s(r, PI);
    p(r, PI);
    s(a);
    p(a);
    s(a, b, h);
    p(a, b, d, c);
    return 0;
}
void s(float r, float PI) {
    cout << "Circle square = " << (PI * pow(r, 2)) << endl;
}
void p(float r, float PI) {
    cout << "Circle perimetr = " << (2 * PI * r) << endl;
}
void s(float a) {
    cout << "Square square = " << (pow(a, 2)) << endl;    //:)
}
void p(float a) {
    cout << "Square perimetr = " << (4 * a) << endl;
}
void s(float a, float b, float h) {
    cout << "Trapezoid square = " << (((f + b) / 2) * h) << endl;
}
void p(float a, float b, float c, float d) {

    cout << "Trapezoid perimetr = " << (f + b + c + d) << endl;
}