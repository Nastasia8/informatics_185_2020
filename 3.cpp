#include <iostream>
using namespace std;

int main() {
int rows = 4;
int col = 4;
int arr_max[rows];
int **arr = new int*[rows];
for (int i=0; i arr[i] = new int[col];
for (int i=0; i for (int j=0; j arr[i][j] = rand() % 50+1;
for (int i=0; i for (int j=0; j cout << arr[i][j] << "\t";
cout << endl;
}
int max;
for (int i=0; i max = arr[i][0];
for (int j=0; j if (arr[i][j] > max) {
max = arr[i][j];
}
arr_max[i] = max;
}
for (int i=0; i cout << "Row = " << i << "\tMax = " << max << endl;
}
for (int i=0; i delete [] arr[i];
delete [] arr;

}