#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Film {

public:
	string name;
	float score = 0;
	int year;
	float arr[3];
	void GetInfo();
	float GetAverage();
	float SetAverage();
	void Average();
	void ShowInfo();


};
