#include <iostream>
using namespace std;

void change(float* m1, float* d1) {
	float t = *m1;
	*m1 = *d1;
	*d1 = t;
	cout << "Values have been changed. " << "m = " << *m1 << ", " << "d = " << *d1;
}

int main() {
	float m = 3.1415, d = 2.7182;
	cout << "m = " << m << ", " << "d = " << d << endl;
	change(&m, &d);

	return 0;
}