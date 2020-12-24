#include <iostream>
#include <string>
using namespace std;

class Figura{
    protected:
    int k, h;
    public:
    Figura(int k){
        this-> k = k;
    }
    Figura(int k, int h){
        this-> k = k;
        this-> h = h;
    }
};
class Treygolnik : public Figura{
public:
    Treygolnik(int k) : Figura(k){}
    void Prym_Tr1(){
        cout << "Prymoygolniy treygolnik V1: " << endl;
        char arr[k][k];
        for (int i= 0; i < k; i++)
            for (int j = 0; j < k; j++)
                arr[i][j] = ' ';
        for (int i = 0; i < k; i++){
            arr[i][i] = '*';
            arr[i][0] = '*';
            arr[k-1][i] = '*';
            for (int j = 0; j < k; j++){
                if (arr[i][j] != '*'){
                    arr[i][j] = ' ';
                }
            }
        }
        for (int i = 0; i < k; i++){
            for (int j = 0; j < k; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        
    }
    void Prym_Tr2(){
        char arr[k][k];
        cout << "Prymoygolniy treygolnik V2: " << endl;
        for (int i= 0; i < k; i++)
            for (int j = 0; j < k; j++)
                arr[i][j] = ' ';
        for (int i = 0; i < k; i++){
            arr[i][i] = '*';
            arr[i][k-1] = '*';
            arr[0][i] = '*';
            for (int j = 0; j < k; j++){
                if (arr[i][j] != '*'){
                    arr[i][j] = ' ';
                }
            }
        }
        for (int i = 0; i < k; i++){
            for (int j = 0; j < k; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    void Ravnobed_tr(){
        cout << "Ravnobedrenniy treygolnik: " << endl;
        int h = 1;
        for (int i=1; i < k; i++){
            h +=2;
        }
        char arr[k][h];
        for (int i= 0; i < k; i++)
            for (int j = 0; j < h; j++)
                arr[i][j] = ' ';
        int c = h/2;
        for (int i=0; i < c+1; i++){
            arr[i][c-i] = '*';
            arr[i][c+i] = '*';
            arr[k-1][i] = '*';
            arr[k-1][c+i] = '*';
        }
    for (int i = 0; i < k; i++){
            for (int j = 0; j < h; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
}
};
class Prymoygolnik : public Figura{
public:
    Prymoygolnik(int k): Figura(k){}
    Prymoygolnik(int k, int h): Figura(k, h){}
void prymoyg(){
   char arr1[k][h];
    cout << "Pryamoygolnik: " << endl;
   for (int i= 0; i < k; i++)
    for (int j = 0; j < h; j++)
        arr1[i][j] = ' ';
for (int i = 0; i < k; i++){
    arr1[i][0] = '*';
    arr1[i][h-1] = '*';
    for(int j = 0; j < h; j++){
        arr1[0][j] = '*';
        arr1[k-1][j] = '*';
        }
    }
    for (int i = 0; i < k; i++){
        for (int j = 0; j < h; j++){
            cout << arr1[i][j] << "  ";
        }
        cout << endl;
    }
}
void kvadrat(){
   char arr1[k][k];
    cout << "Kvadrat: " << endl;
   for (int i= 0; i < k; i++)
    for (int j = 0; j < k; j++)
        arr1[i][j] = ' ';
for (int i = 0; i < k; i++){
    arr1[i][0] = '*';
    arr1[i][k-1] = '*';
    for(int j = 0; j < k; j++){
        arr1[0][j] = '*';
        arr1[k-1][j] = '*';
        }
    }
    for (int i = 0; i < k; i++){
        for (int j = 0; j < k; j++){
            cout << arr1[i][j] << "  ";
        }
        cout << endl;
    }
}
void romb(){
    if (k % 2 == 0){
        k += 1;
    }
    char arr[k][k];
    cout << "Romb: " << endl;
   for (int i= 0; i < k; i++)
        for (int j = 0; j < k; j++)
            arr[i][j] = ' ';    
    int c = k/2;
    arr[k-1][c] = '*';
    arr[0][c] = '*';
    for (int i= 0; i < c; i++){
        arr[i][c-i] = '*';
        arr[i][c+i] = '*';
        arr[c+i][i] = '*';
        arr[c+i][k-1-i] = '*';
}
 for (int i = 0; i < k; i++){
        for (int j = 0; j < k; j++){
            cout << arr[i][j] << "  ";
            arr[i][j] = ' ';
        }
        cout << endl;
    }
}
};
class Smile : public Figura{
public:
    Smile(int k): Figura(k){}
void smile1(){
        if (k % 2 == 0){
        k += 1;
    }
    char arr[k][k];
    cout << "Smile:  " << endl;
   for (int i= 0; i < k; i++)
        for (int j = 0; j < k; j++)
            arr[i][j] = ' ';    
    int c = k/2;  
    arr[k-2][0] = '*';
    arr[k-2][k-1] = '*';  
   for (int i= 0; i < c; i++){
       if (c < 3){
       arr[i][c-1] = '*';
       arr[i][c+1] = '*';
       }
       else{
        arr[i][c-2] = '*';
        arr[i][c+2] = '*';
       }
       arr[k-1][i] = '*';
       arr[k-1][c+i] = '*';
    }
    arr[k-1][0] = ' ';
    arr[k-1][k-1] = ' ';
for (int i = 0; i < k; i++){
        for (int j = 0; j < k; j++){
            cout << arr[i][j] << "  ";
        }
        cout << endl;   
}
}
};

int main(){
    Treygolnik a(5);
    a.Prym_Tr1();
    a.Prym_Tr2();
    a.Ravnobed_tr();
    Prymoygolnik b(8, 5);
    b.prymoyg();
    Prymoygolnik c(6);
    c.kvadrat();
    c.romb();
    Smile d(5);
    d.smile1();
}
