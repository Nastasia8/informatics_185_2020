#include <iostream>
using namespace std;

void findMax(int** arr, int rows, int columns) {
    int* newArr = new int[rows];

    //Я тут хотел обычный массив сделать, но он требует константу, поэтому ещё один динамический

    for (int i = 0; i < rows; i++) {
        int maxibon = 0;
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] > maxibon) {
                maxibon = arr[i][j];
                newArr[i] = maxibon;
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        cout << newArr[i] << "\t";
    }
    delete[] newArr;
}

int main() {
    int rows, columns;
    cout << "The number of rows in the array can only be in the range from 1 to 20\n" << "How many rows in our array?\n";
    cin >> rows;
    cout << "The number of columns in the array can only be in the range from 1 to 20\n" << "How manu columns in our array?\n";
    cin >> columns;
    if ((rows >= 1 && rows <= 20) && (columns >= 1 && columns <= 20)) {
        int** arr = new int* [rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[columns];
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                arr[i][j] = rand() % 64;
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cout << arr[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\nHere is a maxibon numbers\n\n";
        int**& arrRef = arr;
        findMax(arrRef, rows, columns);
        for (int i = 0; i < rows; i++) {
            delete[] arr[i];
        }
        delete[] arr;
    }
    else {
        cout << "You entered the wrong array size\n";
    }
    return 0;
}