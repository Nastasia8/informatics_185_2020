#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Massive {
    
public: 
    int rows, col;// declare rows and columns
    int ** arr;// declare dynamic massive
    void Show1();// creat dynamic array, fill it and show it (show matrix)
    void Show2();// make matrix transposed

};

int main() {
    srand(time(0));
    Massive massive;
    massive.Show1();
    cout << "--------------------------------------------------" << endl;
    massive.Show2();
    return 0;
}


void Massive::Show1() {
    cout << "Rows > ";
    cin >> rows;
    cout << "Columns > ";
    cin >> col;

	arr = new int *[rows];
    
    for (int i = 0; i < rows; i++){
        arr[i] = new int[col];
    }
    
    cout << "Regular matrix" << endl;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand()%100;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void Massive::Show2() {
    cout << "Transposed matrix" << endl;
    
    for(int j = 0; j < col; j++){
        for (int i = 0; i < rows; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}