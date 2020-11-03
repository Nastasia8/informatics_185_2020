#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void findMaximum(int** arr, int* arrMax, int col, int rows) {
	int maxo = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] > maxo) {
				maxo = arr[i][j];
				arrMax[i] = maxo;
			}
		}
		cout << "Maximum in " << i + 1 << " row: " << arrMax[i] << endl;
		maxo = 0;
	}
}

int main() {

	srand(time(0));
	int rows, col;

	cout << "Enter rows > ";
	cin >> rows;
	cout << "Enter columns > ";
	cin >> col;


	int** arr = new int* [rows];
	int* arrMax = new int[rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[col];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	findMaximum(arr, arrMax, col, rows);

	return 0;
}