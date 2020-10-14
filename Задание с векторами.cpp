#include <iostream>
#include <cmath>

using namespace std;

// calculation of length of your vector 
float length_vector(float x, float y, float z) {
	float length = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	cout << "Here is the length of your vector: " << length << endl;
	return length;
}

// calculation length of a unit vector 
float unit_vector(float length1, float x, float y, float z) {
	cout << "That's coordinates of your unit vector: ";
	cout << "(" << x / length1 << "," << y / length1 << "," << z / length1 << ")" << endl;
}

// composition of 2 vectors and vecotr composition of 2 vectors 
float composition(float x, float y, float z) {
	float coordinates[3] = {};
	float cn;
	for (int i = 0; i < 3; i++) {
		cout << "Enter coordinates of your vector(x, y, z): ";
		cin >> coordinates[i];
	}
	cn = x * coordinates[0] + y * coordinates[1] + z * coordinates[2];
	cout << "Here is your composition: " << cn << endl;
	cout << "That's vector composition of your vectors: " << "{" << (y * coordinates[2] - z * coordinates[1]) << "," << (z * coordinates[0] - x * coordinates[2]) << "," << (x * coordinates[1] - y * coordinates[0]) << "}";
	return cn;
}



int main() {
	float x1 = 1, y1 = 5, z1 = 3;
	length_vector(x1, y1, z1);
	float length = length_vector(x1, y1, z1);
	unit_vector(length, x1, y1, z1);
	composition(x1, y1, z1);
	return 0;
}