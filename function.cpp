#include <cmath>
#include <stdio.h>
#include <iostream>
#include "objects.h"
#include "function.h";

using namespace std;

void function(const float a, const float xf, const float xd, const float xe) {
	for (float xe = 1.2f; xe < xf; xe += xd) {
		float x1 = xe;
		float y = pow(log10(a + x1), 2) / pow((a + x1), 2);
		cout << "When x = " << x1 << ", y = " << y << endl;
	}
}

void function(const float a, const float x[]) {
	for (int i = 0; i < 5; i++){
		float y = pow(log10(a + x[i]), 2) / pow((a + x[i]), 2);
		cout << "When x = " << x[i] << ", y = " << y << endl;
	}
}