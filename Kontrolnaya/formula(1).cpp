#include <iostream>
#include <cmath>
using namespace std;

float funct (int k){
float result=1;
for (int n = 1; n <= k; n++)
{
    result=result*(pow (3,n)-1)/(pow(n,2)+1);
}
return result; 

}

int main () {
    int k;
    cout << "enter k: " ;
    cin >> k;
    cout << "result=" << funct (k);
    return 0;
}