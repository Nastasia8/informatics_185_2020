#include <ctime>
#include <iostream>

using namespace std;

class Massive  
{
private:
   int **arr;
   int *_arrMax;
   int rows,cols;
public:
    Massive ();
    
    void set(){
        cout  << "Rows: " ;
        cin >> rows; 
        cout << "Cols: " ;
        cin >>  cols; 
    }
    void inicializaticyua (){ 
        arr= new int* [rows];
        for (int i = 0; i < rows; i++)
            {
             arr[i]= new int [cols];
            }
        
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                arr[i][j] = (rand () % 300)-100;
            }
                    
        }
    } 
    void getArr (){
        cout << "Array:"<< endl;
            for (int i = 0; i < rows; i++){
                for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
    }
    void MaxNumbersinRows (){
        _arrMax = new int [rows];
        for (int i = 0; i < rows; i++)
        {
            _arrMax[i]=(-1000);
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if ((_arrMax[i]<arr[i][j]) and ((arr[i][j] % 2) == 0))
                {
                   _arrMax[i] = arr[i][j];
                }
                
            }
            
        }
        cout<< "Max values:"<< endl;
        for (int i = 0; i < rows; i++)
        {
            if (_arrMax[i]==-1000)
                cout << "V "<< i+1 << " strochke net chetnogo"<<endl;
            else 
                cout <<"Max chetnoye v " <<i+1 << " stroke = "<< _arrMax[i] << endl;
            
        }
        

    }

    void minusMinus () {
        cout << endl<< "Array without negative numbers:"<< endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                 if (arr[i][j]<0)
                 {
                      arr[i][j]=0;
                 }
                 cout << arr[i][j] << "\t";
            }
         cout<< endl;
        }

    }

    void cleaning () {
        
        for (int i = 0; i < rows; i++)
                {
                delete [] arr[i];
                }
        delete [] arr;
        delete [] _arrMax;
        
        
    
    }

        
        ~Massive ();
    
};

Massive::Massive   (    )
{
     set();
        inicializaticyua ();
        getArr ();
        MaxNumbersinRows();
        minusMinus ();
}

Massive::~Massive  ()
{
     cleaning (); 
}




int main () {
    srand (time(NULL));

    Massive Arruy;

    return 0;
}