#include <iostream>
#include <ctime>
using namespace std;

class Massive {
public:    
    int ** add_arr(int **arr,int n, int m) {
    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
            for (int j = 0; j<m; j++){
                arr[i][j] = rand()%25;
            }
    }
    return arr;
    }
    void delete_arr(int **arr,int n) {
      for (int i = 0; i < n; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    }
    void show_arr(int **arr,int n, int m){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "\t" << arr[i][j];
            }
            cout << endl; 
            
        }
        
    }
    void show_t_arr(int **arr,int n, int m){
        for (int i = 0; i <m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "\t" << arr[j][i];
            }
            cout << endl; 
    }

}
};



int main(){
    int **arr = NULL;
    srand(time(NULL));
    cout << "First massive:" << endl;;
    Massive m1;
        cout << "Write n:  ";
    int n;
    cin >> n;
        cout << "Write m: ";
    int m;
    cin >> m; 
    arr = m1.add_arr(arr,n,m);
    m1.show_arr(arr,n, m);
    cout << "********************************************************************" << endl;
    m1.show_t_arr(arr,n, m);
    m1.delete_arr(arr,n);

    cout << "Second massive:" << endl;
    cout << "Write n:  ";
    cin >> n;
        cout << "Write m: ";
    cin >> m; 
    Massive m2;
   arr = m2.add_arr(arr,n,m);
    m2.show_arr(arr,n, m);
    cout << "********************************************************************" << endl;
    m2.show_t_arr(arr,n, m);
    m2.delete_arr(arr,n);
    cout << "Thrid massive:" << endl;
    cout << "Write n:  ";
    cin >> n;
        cout << "Write m: ";
    cin >> m; 
    Massive m3;
    arr = m3.add_arr(arr,n,m);
    m3.show_arr(arr,n, m);
    cout << "********************************************************************" << endl;
    m3.show_t_arr(arr,n, m);
    m3.delete_arr(arr,n);


}