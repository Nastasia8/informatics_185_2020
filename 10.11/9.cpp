#include <iostream>
#include <ctime>
using namespace std;

void minimum ( int **,int , int );
void zapolnenieAndShow (int **, int ,int  );



int main (){
    int rows,cols;
     cout  << "Rows: " ;
    cin >> rows;
    cout << "Cols: " ;
    cin >> cols ;
     int **arr= new int* [rows];
      for (int i = 0; i < rows; i++)
      {
          arr[i]= new int [cols];
      }
        zapolnenieAndShow(arr,rows,cols);
        minimum (arr,rows,cols);

      for (int i = 0; i < rows; i++)
      {
          delete [ ] arr[i];
      }
      delete [] arr;
      

return 0;

}
void zapolnenieAndShow (int **arr, int rows,int cols ){
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand () % 200;
            cout << arr[i][j] << "\t" ;
        }
        cout << endl;
    }
}
void minimum ( int **arr,int rows, int cols){
    int *arrMin = new int [rows];
        for (int i = 0; i < rows; i++)
        {
            arrMin[i] =  32000;
        }
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arrMin[i]>arr[i][j])
            {
                arrMin[i]=arr[i][j];
            }
        }
    }  
 cout<< "Minimalniye znacheniya v stokah:"<< endl;
 for (int i = 0; i < rows; i++)

        {
            cout << i+1 <<" stroka: " << arrMin[i]<< endl;
        }
}
