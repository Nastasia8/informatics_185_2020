#include <iostream>
#include <cmath>
using namespace std; 

// perimetr of your trapezoid 
void perimetr(float a, float b, float c, float d) {
	cout << "It's perimetr of your trapezoid:  " << a + b + c + d << endl;
}
// perimetr of your circle 
void perimetr(float pi, float r) {
	cout << "That's perimetr of your circle: " << 2 * pi * r << endl;
}

// perimetr of your square
void perimetr(float a) {
	cout << "Here is perimetr of your square: " << 4 * a << endl;
}

// area of your trapezoid 
void area(float a, float b, float h) {
	cout << "It's area of your trapezoid: " << ((a + b) / 2) * h << endl; 
}
// area of your circle 
void area(float pi, float r) {
	cout << "It's area of your circle: " << pi * pow(r, 2) << endl; 
}

// area of your square 
void area(float a) {
	cout << "It's area of your square: " << pow(a, 2) << endl; 
}

int main() {
	const float pi = 3.14; 

	perimetr(4, 10, 5, 5);
	perimetr(pi, 5);
	perimetr(2);
	area(4, 10, 4);
	area(pi, 5);
	area(5);

	return 0;
}
