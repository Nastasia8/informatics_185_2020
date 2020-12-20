#include <iostream>

using namespace std;

void zapol_arr(int size, int* arr)
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 25;

	}

}

void show_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";

	}
}

int main()
{
	int size;
	cout << "Size arr: ";
	cin >> size;
	int* arr = new int[size];
	zapol_arr(size, arr);
	show_arr(arr, size);
}
