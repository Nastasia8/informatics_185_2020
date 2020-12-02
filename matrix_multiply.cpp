#include <iostream>
#include <ctime>
using namespace std;

void multiply(int** matrix1, int** matrix2, int r, int c, int row, int col) {
	int result = 0, j = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < col; j++) {
			for (int z = 0; z < c; z++) {
				result += matrix1[i][z] * matrix2[z][j];
			}
			cout << result << endl;
			result = 0;
		}
	}
}


int main() {
	int r, c, row, col;
	srand(time(0));
	cout << "R > ";
	cin >> r;
	cout << "Row > ";
	cin >> row;
	cout << "C > ";
	cin >> c;
	cout << "Col > ";
	cin >> col;


	int** matrix1 = new int* [r];
	int** matrix2 = new int* [row];

	for (int i = 0; i < r; i++) { matrix1[i] = new int[c]; }
	for (int i = 0; i < row; i++) { matrix2[i] = new int[col]; }

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			matrix1[i][j] = rand() % 10;
			cout << matrix1[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "---------------------------------------------------------------" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix2[i][j] = rand() % 10;
			cout << matrix2[i][j] << "\t";
		}
		cout << endl;
	}

	if (c == row) {
		multiply(matrix1, matrix2, r, c, row, col);
	}

	return 0;
}