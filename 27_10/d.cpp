#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void fillArray(int* arr1, int size) {
	for (int i = 0; i < size; i++) {
		arr1[i] = rand() % 100;
	}
}

void showArray(int* arr1, int size) {
	cout << "That's array's elements: ";
	for (int i = 0; i < size; i++) {
		cout << arr1[i] << " ";
	}
}

void findMinimum(int* arr1, int size, int mine) {
	mine = 101;
	for (int i = 0; i < size; i++) {
		if (arr1[i] < mine) {
			mine = arr1[i];
		}
	}
	cout << "That's the minimum value: " << mine;
}

int main() {
	srand(time(0));
	int size, mine = 0;
	cout << "Enter the size of your array > ";
	cin >> size;
	int* arr = new int[size];

	fillArray(arr, size);
	showArray(arr, size);
	findMinimum(arr, size, mine);

	return 0;
}