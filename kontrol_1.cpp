#include <iostream>
#include <cmath>
using namespace std;
float sum(float n, float y, int x)
{
    return n*pow ((1+y/100),x);
}
int main()
{
    float n;
    float y;
    int x;
    cout<<"Enter number"<<endl;
    cin>>n;
    cin>>y;
    cin>>x;
    cout<<"s= "<<sum(n,y,x)<<endl;
}
