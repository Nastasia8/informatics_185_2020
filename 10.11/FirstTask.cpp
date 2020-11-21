#include <iostream>
#include <ctime>

using namespace std;
class Massive
{


private:
        
    int rows,cols;
    int **arr= new int* [rows];
    
 
public:
    void Message () { // Вывод сообщения
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

void TOD() { // Транспонирование с помощью 2 массива, сразу же вывод нового массива и удаление его же
    int **_arrT= new int* [cols];
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
cout << "T Array:"<< endl;
     for (int i = 0; i < cols; i++)
     {
       for (int j = 0; j < rows; j++)
       {
           cout << _arrT[i][j] << "\t";
       }
       cout << endl;

       
   }
for (int i = 0; i < cols; i++)
        {
        delete [] _arrT[i];
        }
    delete [] _arrT;

   }

 
   

void cleaning () { // очистка мусора
    for (int i = 0; i < rows; i++)
        {
        delete [] arr[i];
        }
    delete [] arr;
   

}

};






int main () {
    srand (time(NULL));
    Massive Array1;
    Array1.Set ();
    Array1.sozdanieAndZapolnenuyeOfArrs();
    Array1.getArr ();
    Array1.TOD();
    Array1.cleaning();

    Massive Array2;
    Array2.Message();
    Array2.Set ();
    Array2.sozdanieAndZapolnenuyeOfArrs();
    Array2.getArr ();
    Array2.TOD();
    Array2.cleaning();


    return 0;
}