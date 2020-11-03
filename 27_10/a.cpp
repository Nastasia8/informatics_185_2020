#include <iostream>

using namespace std;

void someFunction(int* l1, int* s1, int* d1) {
	cout << "Changed values: " << (*l1) + 1 << " " << (*s1) * 2 << " " << (*d1) - 1;
	//cout << (*s1) * 2 << endl;
	//cout << (*d1)-- << endl;


}
int main() {
	int l = 0, s = 1, d = 4;
	cout << "Initial values: " << l << " " << s << " " << d << endl;
	someFunction(&l, &s, &d);

	return 0;
}