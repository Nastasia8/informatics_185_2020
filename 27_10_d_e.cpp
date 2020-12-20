#include <iostream>
#include <cmath>
#include <random>

using namespace std;

void fillArray(int*, int);
void showArrayElements(int*, int);
void findMinInArray(int*, int);


int main()
{
    setlocale(LC_ALL, "RUS");
    int num; //Объявляем размер массива
    cout << "Введите размер массива = ";
    cin >> num; //Получили размер массива
    int* p_darr = new int[num]; //Выделили память под массив


    fillArray(p_darr, num);
    showArrayElements(p_darr, num);
    findMinInArray(p_darr, num);
    delete[] p_darr; //Очистили память. Конец
}

void fillArray(int* pArr, int size) {
    for (int i = 0; i < size; i++)
    {
        pArr[i] = rand() % 50;
    }
}

void showArrayElements(int* pArr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "Значение " << i << " = " << pArr[i] << endl;
    }
}

void findMinInArray(int* pArr, int size) {
    int min = pArr[0];
    for (int i = 0; i < size; i++) {
        if (min > pArr[i]) {
            min = pArr[i];
        }
    }
    cout << "Минимальный элемент массива = " << min;
}

