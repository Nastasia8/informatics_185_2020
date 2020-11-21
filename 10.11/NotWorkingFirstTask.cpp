#include <iostream>
#include <ctime>

using namespace std;
class Massive
{


private:
        
    int rows,cols;
    int **arr= new int* [rows];
    int **_arrT= new int* [cols];

 
public:
    void Message () { // Вывод номера массива
        cout<< " massive:" << endl;
}

void Set (){   // установка столбцов и строк 
    cout  << "Rows: " ;
    cin >> rows; 
    cout << "Cols: " ;
    cin >>  cols; 
        
   }


void sozdanieAndZapolnenuyeOfArrs() { // Создание и заполнение массива
 
    for (int i = 0; i < rows; i++)
        {
        arr[i]= new int [cols];
        }
   
    for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                arr[i][j] = rand () % 100;
            }
            
        }


        }
    
void getArr () {  // Вывод исходного массива
    cout << "Array:"<< endl;
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
   }

void transponirovaniye () { // транспонирование с помощью еще 1 массива
   for (int j = 0; j < cols; j++)
{
         _arrT[j]= new int [rows];
}
    
for (int j = 0; j < cols; j++)
{
    for (int i = 0; i < rows; i++)
    {
     _arrT[j][i]=arr[i][j];
    }
    
}

 }
   
void getTArr () { // Вывод транспонированного  массива
    cout << "T Array:"<< endl;
     for (int i = 0; i < cols; i++)
     {
       for (int j = 0; j < rows; j++)
       {
           cout << _arrT[i][j] << "\t";
       }
       cout << endl;
       
   }
   }
void cleaning () { // очистка мусора
    for (int i = 0; i < rows; i++)
        {
        delete [] arr[i];
        }
    delete [] arr;
   
    for (int i = 0; i < cols; i++)
        {
        delete [] _arrT[i];
        }
    delete [] _arrT;

   }

   

};






int main () {
    srand (time(NULL));
    Massive Array1;
    Array1.Set ();
    Array1.sozdanieAndZapolnenuyeOfArrs();
    Array1.getArr ();
    Array1.transponirovaniye();
    Array1.getTArr ();
    Array1.cleaning();

    Massive Array2;
    Array2.Message();
    Array2.Set ();
    Array2.sozdanieAndZapolnenuyeOfArrs();
    Array2.transponirovaniye();
    Array2.getArr ();
    Array2.getTArr ();
    Array2.cleaning();


    return 0;
}