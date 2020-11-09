#include <iostream>
using namespace std;
void f(int *pa, int *pb, int *pc)
{

(*pc)=*pa;
(*pa)=*pb;
(*pb)=*pc;
}
int main() {
  int a, b, c;
  a=7;
  b=10;
  c=0;
  cout <<"a = " << a << "\n" ;
  cout << "b = "<< b << "\n" ;
 int *pa=&a;
  int *pb=&b;
  int *pc=&c;
  f( &a, &b, &c);

  cout <<"a = " << a << "\n" ;
  cout << "b = "<< b << "\n" ;
 
}