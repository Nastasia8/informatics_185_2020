#include <iostream>
using namespace std;
 
 void chetdiapazon(int nach, int kon)
 {
     int sum=0;
     while (nach <= kon)
     {
         if (nach % 2 == 0)
         {
             sum = sum = nach;
         }
         cout << "Число = " << nach << endl;
         nach ++;
     }
     cout << "Сумма = " << sum << endl;
 }
 
 int main ()
 {
     int nach;
     cout << "Введите начальное значение" << endl;
     cin >> nach;
     
     int kon;
     cout << "Введите конечное значение" << endl;
     cin >> kon;
     
     chetdiapazon(nach, kon);
 }