#include <iostream>
#include <string>
#include <cmath>
#include "film.h"

using namespace std;

int main() {
	Film film1;
	Film film2;
	Film film3;
	film1.GetInfo();
	film1.Average();
	film2.GetInfo();
	film2.Average();
	if (film1.GetAverage() > film2.GetAverage()) {
		film1.ShowInfo();
	}
	else {
		film2.ShowInfo();
	}
	return 0;
}