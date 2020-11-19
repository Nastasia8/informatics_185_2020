#include <iostream>
#include <cmath>

using namespace std;

void sum(int numProd, float priceProd)
{
	float sum = 0;
	sum = numProd * priceProd;
	cout << "\nSum of buying is " << sum << "RUB" << endl;
}

int main()
{
	int numProd;
	cout << "Enter number of products N in RUB - " << endl;
	cin >> numProd;

	float priceProd;
	cout << "\nEnter price for 1 product N in RUB - " << endl;
	cin >> priceProd;
	cout << "RUB";
	cout << endl;

	sum(numProd, priceProd);
}