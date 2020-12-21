#include <iostream>
#include <string>
using namespace std;

void Prym_Tr1(int k){
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
void Prym_Tr2(int k){
    char arr[k][k];
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
void Ravnobed_tr(int k){
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
void prymoyg(int k, int l){
   char arr1[k][l];
   for (int i= 0; i < k; i++)
    for (int j = 0; j < l; j++)
        arr1[i][j] = ' ';
for (int i = 0; i < k; i++){
    arr1[i][0] = '*';
    arr1[i][l-1] = '*';
    for(int j = 0; j < l; j++){
        arr1[0][j] = '*';
        arr1[k-1][j] = '*';
        }
    }
    for (int i = 0; i < k; i++){
        for (int j = 0; j < l; j++){
            cout << arr1[i][j] << "  ";
        }
        cout << endl;
    }
}
void romb(int k){
    if (k % 2 == 0){
        k += 1;
    }
    char arr[k][k];
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
void smile1(int k){
        if (k % 2 == 0){
        k += 1;
    }
    char arr[k][k];
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

int main(){
    cout << "Prymoygolniy treygolnik V1: " << endl;
    Prym_Tr2(8);
    cout << "Prymoygolniy treygolnik V2: " << endl;
    Prym_Tr1(10);
    cout << "Ravnobedrenniy treygolnik: " << endl;
    Ravnobed_tr(5);
    cout << "Pryamoygolnik: " << endl;
    prymoyg(5, 8);
    cout << "Kvadrat:  " << endl;
    prymoyg(5, 5);
    cout << "Romb: " << endl;
    romb(8);
    cout << "Smile:  " << endl;
    smile1(8);
  
}