#include <iostream>
#include <ctime>
using namespace std;

int main()
{
int max;
int stroka = 4;
int stolbci=7;
int array[stroka][stolbci];
for (int i=0;i<stroka;i++)
{
for (int j=0;j<stolbci;j++)
{
array[i] [j] = rand() % 200;
cout<<"\t"<<array [i] [j];
}
cout<<endl;
}

for (int i=0;i<stroka;i++)
{
for (int j=0;j<stolbci;j++)
if (arr [i] [j]<max)
{
max=arr [i] [j];
}
}
cout<<max<<endl;
}