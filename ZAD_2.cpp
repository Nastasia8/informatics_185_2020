#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void sum(float x, float y);
float pr(float x, float y);
void raz(float x, float y);
int main()
{
float x;
float y;
float z;
cin>>x;
cin>>y;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
sum(x,y);
raz(x,y);
z=pr(x,y);
cout<<" v.pr="<<z<<endl;

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