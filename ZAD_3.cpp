#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void sum(float x, float y);
float pr(float x, float y);
void raz(float x, float y);
int main()
{
int n;
float x;
float y;
float z;
cin>>x;
cin>>y;
cout<<"enter a number"<<endl;
cin>>n;
switch(n)
{
case 0:
sum(x,y);
break;
case 1:
raz(x,y);
break;
case 2:
pr(x,y);
break;
default:
cout<<"0,1,2"<<endl;
break;

}
return 0;
}
void sum(float x, float y)
{
cout<<"sum="<<x+y;
}
float pr(float x, float y)
{
return x*y;
}
void raz(float x, float y)
{
cout<<" raz="<<x-y;
}