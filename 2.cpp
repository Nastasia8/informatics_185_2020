
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float x,y,a,d;
cout<<"input x=";
cin>>x;
cout<<"input y=";
cin>>y;
cout<<"input a=";
cin>>a;
cout<<"input d=";
cin>>d;
if((x==y)||(d==0))
{
    cout<<"!!!!!!!!!"<<endl;
}
else
cout <<"="<<27/(x-y)+(3*pow(a,2))/d<< endl;

    return 0;
}