#include <iostream>
#include <ctime>
using namespace std;



void zapol_arr(int size, int *arr){
    for (int i=0; i<size; i++){
        arr[i] = rand()%25;
    }
}
void show_arr(int *arr, int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << endl;
    }
}
void max(int *arr, int size){
    int max = arr[0];
    for (int i=0; i<size; i++){
        if (max < arr[i])
        max = arr[i];
    }
    cout << "Max in arr= " << max;
}


int main()
{
srand(time(NULL));
   int size;
   cout <<"Size arr: "  << endl;
   cin >> size;
   int *arr = new int [size];
   zapol_arr(size,arr);
   show_arr(arr,size);
   max(arr,size);
}
// <3