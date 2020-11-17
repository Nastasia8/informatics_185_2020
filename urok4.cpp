#include <iostream>

using namespace std;

void diapazon(int nz, int kz){
    int summa=0;
    while (nz<=kz){
        if (nz % 2 == 0){
            summa = summa + nz;
        
        }
        cout << "Chislo= " << nz << endl;
        nz++;
        
    }
    cout << "Summa= " << summa << endl;
}


int main()
{
    int nz;
    cout << "Vvedite nachalnoe znachenie" << endl;
    cin >> nz;
    int kz;
    cout << "Vvedite konechnoe znachenie" << endl;
    cin >> kz;
    diapazon(nz,kz);
}
//nz-начальное значение 
//kz-конечное значение 
// <3