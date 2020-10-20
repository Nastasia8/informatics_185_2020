#include <iostream>
#include <cmath>

using namespace std;

// функция к первому заданию
float vectorLength(int arr[3]) 
{
    float result = sqrt(pow(arr[0], 2) + pow(arr[1], 2) + pow(arr[2], 2));
    return result;
}
// a, b ,c, d - стороны фигуры
int perimeter(int a, int b, int c, int d)
{
    return a + b + c + d;
}
// a - радиус круга 
float perimeter(int a)
{
    return a * 2 * 3.14f;
}

//трапеция
float area(int a, int b, int h)
{
    return ((a+b)*h) / 2);
}
//square
int squareArea(int a)
{
    return a*a;
}

double area(double a)
{
    return (a*a) * 3.14f;
}

int main()
{
    //1 задание
    int vector[3] = {1, 5, 3};
    float evector[3] = {1/vectorLength(vector), 5/vectorLength(vector), 3/vectorLength(vector)};
    cout << "Длина вектора: " << vectorLength(vector) << endl;
    //2 задание
    cout << "Единичный вектор{" << evector[0] << ", " << evector[1] << ", " << evector[2] << "}" << endl;
    //3 задание
    int customVector[3];
    cout << "Введите х вектора : " << endl;
    cin >> customVector[0];
    cout << "Введите y вектора: " << endl;
    cin >> customVector[1];
    cout << "Введите z вектора: " << endl;
    cin >> customVector[2];
    cout << "Скалярное произведение векторов: " << vector[0]*customVector[0] + vector[1]*customVector[1] + vector[2]*customVector[2] << endl;
    //4 задание
    cout << "Векторное произведение векторов: {" << vector[1]*customVector[2] - vector[2]*customVector[1] << ", " << vector[2]*customVector[0] - vector[0]*customVector[2] << ", " << vector[0]*customVector[1] - vector[1]*customVector[0] << "}" << endl;
    //Задание 2.1
    cout << "Периметр Трапеции " << perimeter(1, 2, 3, 4) << endl;
    cout << "Периметр Круга " << perimeter(1, 2, 3, 4) << endl;
    cout << "Периметр Квадрата " << perimeter(2) << endl;
    //Задание 2.2
    cout << "Площадь трапеции" << area(1, 2) << endl;
    cout << "Площадь круга" << area(2) << endl;
    cout << "Площадь квадрата" << squareArea(3) << endl;
    return 0;
    
}

