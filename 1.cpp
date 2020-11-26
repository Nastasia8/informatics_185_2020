
#include <iostream>

using namespace std;

int main()
{
float x,y,z,c;
cout<<"input x=";
cin>>x;
cout<<"input y=";
cin>>y;
cout<<"input z=";
cin>>z;
cout<<"input c=";
cin>>c;
if((c==6)||(y==0))
{
    cout<<"wrong"<<endl;
}
else
    std::cout <<"="<<(x/y)+((4-z)/(6-c))  << std::endl;

    return 0;
}