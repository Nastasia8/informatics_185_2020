#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int size, mine=101;

	srand(time(0));

	cout << "Enter your array's size > ";
	cin >> size;

	int* arr = new int[size];
	cout << "The elements of your array: ";
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
		
		cout << arr[i] << " ";
		if (arr[i] < mine) {
			mine = arr[i];
		}
	}

	cout << "Minimum is " << mine;

	return 0;
}