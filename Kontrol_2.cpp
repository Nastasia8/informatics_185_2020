#include <iostream>
#include <cmath>
using namespace std;
float sum(int k, int n)
{
    float sum=0;
    for (int i=n; i<=k; i++)
    sum+=(4-n)/((2*n+1)+3);
    return sum;
}
int main()
{
    int k;
    int n=0;
    cout<<"Enter number"<<endl;
    cin>>k;
    cout<<"s= "<<sum(k,n)<<endl;
}
