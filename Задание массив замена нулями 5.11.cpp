#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;


class Massive
{
 int ** arr;
 int *_arMax;
 int row;
 int col;
 int n=-30;

public:
    void mainf();
    void ShowArray();
    void setRow(int row);
    void setCol(int col);
    int getRow();
    int getCol();
    void namef();
    void zero();
    void mas2();
    ~Massive()
    {//деструктор
        for (int i = 0; i < getRow(); i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
        delete[] _arMax;
        cout << "Delete" <<endl;
    }
};
/////////////////////////////////////////
    void Massive::setRow(int row){
        this->row=row;
    }
    void Massive::setCol(int col){
        this->col=col;
    }
    int Massive::getRow(){
        return this->row;
    }
    int Massive::getCol(){
        return this->col;
    }
////////////////////////////////////////
void Massive::mainf()
{
    cout << "Mass: " << endl;
    srand(time(0));
        arr = new int*[row]; 
        for (int i = 0; i < row; i++)
        {   
            arr[i] = new int[col];
        } 
    //заполняем рандомными значениями и выводим
        for (int i = 0; i < row; i++) 
        {
          for (int j = 0; j < col; j++)
                {
                    arr[i][j] = (rand() % 20) -9;
                    cout << arr[i][j] << "\t";
                } 
                cout << endl;}         
}
void Massive::ShowArray()
{
    cout << "Show:" << endl;
        for (int i = 0; i < getRow(); i++) 
        {
            for (int j = 0; j < getCol(); j++)
                    cout << arr[i][j] << "\t";
            cout << endl;
        } 
}
void Massive::mas2(){
_arMax = new int[row]; 
}
///
void Massive::namef()
{
    cout << "Show:" << endl;
        for (int i = 0; i < getRow(); i++) 
        {
            for (int j = 0; j < getCol(); j++)
                  if (arr[i][j]%2==1 && arr[i][j]>n){
                 n=arr[i][j];}
        } 
        cout<<"Max in oll ne4etnoe = " <<n<<endl;
       n=-30;
      for (int i = 0; i < getRow(); i++) 
        {
            for (int j = 0; j < getCol(); j++){
                  if ((arr[i][j]%2==1 or (arr[i][j]*-1)%2==1)
                 && arr[i][j]>n){
                 n=arr[i][j];
                 }
            
        //проверка на нечётность и нахождение наибольшего нечётного
}

if (n==-30){
cout<<"none ne4etnoe in row"<<endl;}
 cout<<"String "<<i<<"   Max in row ne4etnoe = "<<n<<endl;
  _arMax[i]=n;
 n=-30;
 
}

cout<< "massiv max ne4etnoe -> ";
for (int i=0; i< getRow();i++){
  cout<<_arMax[i]<<"\t";
}
cout<<endl;
}
///
void Massive::zero(){
    cout << "Show zero:" << endl;
        for (int i = 0; i < getRow(); i++) 
        {
            for (int j = 0; j < getCol(); j++){
            if (arr[i][j]<0){
              arr[i][j]=0;}
            cout << arr[i][j] << "\t";
            }
            cout << endl;
        } 
}

int main()
{
    int row;
    int col;
    cout << "Input rows: ";
    cin >> row;
    cout << "Input colums: ";
    cin >> col;
    
    Massive massive;
    massive.setRow(row);
    massive.setCol(col);
    massive.mainf();
    massive.mas2();
    massive.namef();

//вывели нечётные
    massive.zero(); //замена отрицательных

    return 0;
}