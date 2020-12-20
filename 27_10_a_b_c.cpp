#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int num; //Объявляем размер массива
cout << "Введите размер массива = ";
cin >> num; //Получили размер массива

int *p_darr = new
int[num]; //Выделили память под массив

for (int i = 0; i < num; i++) //Заполняем массив [16-19]
{
p_darr[i] = i;
cout << "Значение " << i << " = " << p_darr[i] << endl;
}

delete [] p_darr; //Очистили память. Конец

int a;
cout << "Введите значение а = ";
cin >> a;

int b;
cout << "Введите значение b = ";
cin >> b;

void smena(float &a, float &b);
float r = a;
a = b;
b = r;

int x = 10; //Объявление переменных [36-43] и их вывод с помощью указателей [45-47]
int *px = &x;

int y = 11;
int *py = &y;

int c = 12;
int *pc = &c;

cout << "Vivod 1-go ykazatelia a v 8 system = " << px << "; Vivod 1-go ykazatelia a v 10 system = " << *px << endl;
cout << "Vivod 2-go ykazatelia b v 8 system = " << py << "; Vivod 1-go ykazatelia b v 10 system = " << *py << endl;
cout << "Vivod 3-go ykazatelia c v 8 system = " << pc << "; Vivod 1-go ykazatelia c v 10 system = " << *pc << endl;

cout << "Vivod do obmena znachenii funkcii = " << b << "; " << a << endl;
cout << "Vivod obmena znachenii funkcii = " << a << "; " << b << endl;
}