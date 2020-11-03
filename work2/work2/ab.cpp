
#include <iostream>
using namespace std;
void svvap (int,int );
void g (int *pa,int *pb,int *pc)

{
    (*pa)++;
    (*pb)=(*pa)*2;
    (*pc)+=10;
    
    
    }

int main()
{
 int a= 5,b=4,c=5,d=6,s;
 int *pa=&a;
 int *pb=&b;
 int  *pc=&c;
 g(&a,&b,&c);
  
 cout <<" a= "<< a << endl;
 cout <<" b= "<< b<< endl;
 cout <<" c= "<< c << endl;
  cout <<" d= "<< d << endl;
 svvap (c,d);
}

void svvap (int c,int d){
 int s;
 s=c;
 c=d;
 d=s;
 cout <<"after swap"<<endl <<" c= "<< c << endl;
  cout <<" d= "<< d << endl;
}
