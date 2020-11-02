#include <iostream>
#include <random>
using namespace std;

int main() {
  int n=0;
  int size;
  srand( time(0) );
  cout << "size = ";
  cin >> size;
 int *massiv = new int [size];
 for ( int i=0; i < size; i++)
    massiv[i]= rand() % 20;


for  ( int i=0; i < size; i++)
    cout << *(massiv+i) << endl;

for  ( int i=0; i < size; i++)
  if (massiv[i]>n)
    n=massiv[i];
cout << "max = "<<n;
delete [] massiv;

}
