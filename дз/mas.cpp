#include <iostream>
#include <ctime>
using namespace std;

class Mas{
    int **arr;
    int row, col;

    public:
        void set_row(int row){  // установка кол-ва строк
            this->row = row;
        }
        void set_col(int col){ // установка кол-ва столбцов
            this->col = col;
        }
        void create_arr(){ // создание 2-х мерного динамического массива
            arr = new int*[row];
            for (int i = 0; i < row; i++)
            {
                arr[i] = new int[col];
            }
        }
        void fill_arr(){  // заполнение массива
            srand(time(NULL));
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    arr[i][j] = rand() % 50 - 25;
                }
                
            }
            
        }
        void show_arr(){  // функция пвыводит массив
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    cout << arr[i][j] << "\t";
                }
                cout << endl;
            }
        }
        void change(int *arr1){  // нахождение миниимального значения в столбце
            for (int i = 0; i < col; i++){
                int min = 9999;
                for (int j = 0; j < row; j++)
                {
                    if (min > arr[j][i])
                    {
                        min = arr[j][i];
                    }
                }
                arr1[i] = min;
               
            }
        }
        void change1(int *arr1){  // обработка массива
            for (int i = 0; i < col; i++)
            {
                for (int j = 0; j < row; j++)
                {
                    if (arr[j][i] == arr1[i]){
                        arr[j][i] = 0;
                    }
                }
                cout << endl;
            }
        }
};

int main(){
    int row, col;
    cout << "Write row, col:" << endl;
    cin >> row;
    cin >> col;
    cout << endl;
    int *arr1 = new int[col];
    Mas m;
    m.set_row(row);
    m.set_col(col);
    m.create_arr();
    m.fill_arr();
    m.show_arr();
    cout << endl;
    m.change(arr1);
    m.change1(arr1);
    m.show_arr();
    cout << endl;

    cout << "Write row, col:" << endl;
    cin >> row;
    cin >> col;
    cout << endl;
    Mas m1;
    m1.set_row(row);
    m1.set_col(col);
    m1.create_arr();
    m1.fill_arr();
    m1.show_arr();
    cout << endl;
    m1.change(arr1);
    m1.change1(arr1);
    m1.show_arr();
}