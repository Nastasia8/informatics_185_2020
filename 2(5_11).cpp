#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

class Massive {

private:
	int rows, col, mini, maxi;
	int** arr = new int* [rows];
	int* arr2 = new int[2];
public:
	void Fillarr();
	void Showarr();
	void Finding(); // find maximum or minimum, then show it
	void Changearr(); // change all negative elements to 0
	void Delete();


};

int main() {
	srand(time(0));
	Massive massive;
	massive.Fillarr();
	massive.Showarr();
	massive.Finding();
	massive.Changearr();
	massive.Showarr();
	massive.Delete();
	return 0;
}

void Massive::Fillarr() {
	cout << "Enter rows value > ";
	cin >> rows;
	cout << "Enter columns value > ";
	cin >> col;
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[col];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = trunc((-1. + rand() / (RAND_MAX / 2.)) * 100);
			mini = arr[i][j];
			maxi = arr[i][j];
		}
	}

}

void Massive::Showarr() {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}

// if number is odd it's finding maximum, if number is even it's finding minimum
void Massive::Finding() {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] % 2 == 0 && arr[i][j] < mini) {
				mini = arr[i][j];
			}
			else if (arr[i][j] % 2 != 0 && arr[i][j] > maxi) {
				maxi = arr[i][j];
			}
		}
	}
	cout << "Minimum among even nums = " << mini << "  " << "Maximum among odd nums = " << maxi << endl;
}

void Massive::Changearr() {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] < 0) {
				arr[i][j] = 0;
			}
		}
	}
}

void Massive::Delete() {
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}
