 #include <iostream>
 #include <ctime>
 using namespace std;

void proizv (int r,int c,int rows,int cols,int **arr1,int **arr2);

 int main () {
    srand (time(NULL));
    int r,c,rows,cols;
    cout << " r=" ;
    cin >> r ;
    cout << " c=" ;
    cin >> c ;
    cout << " rows=" ;
    cin >> rows ; 
    cout << " cols=" ;
    cin >> cols ;
    
    int **arr1= new int* [r];
        for (int i = 0; i < r; i++)
        {
            arr1[i]= new int [c];
        }
    int **arr2= new int* [rows];
        for (int i = 0; i < r; i++)
        {
            arr2[i]= new int [cols];
        }
    cout << "first array:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr1[i][j]= rand () % 5;
            cout << arr1 [i][j] << "\t";
        }
        cout << endl;  
    }
    cout << "second array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr2[i][j]= rand () % 5;
            cout << arr2 [i][j] << "\t";
        }
        cout << endl;  
    }
    if (c==rows)
    {
        proizv (r,c,cols,rows,arr1,arr2);
    }
    else
    {
        cout << "peremnojat nelzya";
    }
    
    for (int i = 0; i < r; i++)
    {
        delete [] arr1[i];
    }
    delete [] arr1;   
    
    for (int i = 0; i < rows; i++)
    {
        delete [] arr2[i];
    }
    delete [] arr2;   
     return 0;
 }

 void proizv (int r,int c,int rows,int cols,int **arr1,int **arr2) {
    

    int **proizved = new int* [r];
   
    for (int i = 0; i < r; i++)
    {
        proizved[i]=new int [cols];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            proizved[i][j]=0;
        }
        
    }
    
   
   
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           
            for (int k = 0; k < c; k++)
            {
                proizved[i][j]+=arr1[i][k]*arr2[k][j];
            }
            
        } 
    }
    cout<< "proizvedeniye matric:" << endl;
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout <<  proizved[i][j] << "\t";
        }
        cout << endl;  
    }

    for (int i = 0; i < rows; i++)
    {
        delete [] proizved[i];
    }
    delete [] proizved;   
    

 }