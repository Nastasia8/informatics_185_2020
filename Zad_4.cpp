#include <iostream>
using namespace std;
void chetdiapazon( int nach, int kon)
{
int sum=0;
while (nach <= kon)
{
if(nach % 2 ==0)
{
sum=sum+nach;
}
cout <<nach<< endl;
nach++;
}
cout<<"summ chet "<< sum<<endl;

}
int main()
{
int nach;
cout<<"Enter start"<<endl;
cin>>nach;

int kon;
cout<<"Enter finish"<< endl;
cin>> kon;
chetdiapazon( nach,  kon);
}