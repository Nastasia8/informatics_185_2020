#include <iostream>
#include <ctime>
using namespace std;
void findMax(int ** arr, int strok, int stolbov, int *_arrMax)
{
    for (int i = 0; i < strok; i++)
    {
        for (int j = 0; j < stolbov; j++) 
        {   
            if (_arrMax[i] < arr[i][j])
            {
                _arrMax[i] = arr[i][j];
               
            }
        }
    }
    cout << "Maxs: ";
    for (int i = 0; i < strok; i++)
    {
        cout << _arrMax[i] << " ";
    }
}
int main()
{
    int strok, stolbov;
    cout << "strok:";
    cin >> strok;
    cout << "stolbov:";
    cin >> stolbov;
    int max[3] = {-1000, -1000, -1000};
   
    srand(time(NULL));

    
    int **arr = new int*[strok];
  
    for (int i = 0; i < strok; i++)
    {
        arr[i] = new int [stolbov];
        for (int j = 0; j < stolbov; j++) 
        {
            arr[i][j] = (rand() % 65);
        }
    }
    
    for (int i = 0; i < strok; i++)
    {
        for (int j = 0; j < stolbov; j++) 
        {   
            cout << arr[i][j] << "\t";
        }
        cout << " " << endl;
    }
    
    findMax(arr, strok, stolbov, max);

    for (int i=0; i < strok; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}