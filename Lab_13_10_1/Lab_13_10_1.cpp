#include <iostream> 
#include <cmath> 
using namespace std;
float funslenght(float, float, float);
int main()
{
	float x = 1;
	float y = 5;
	float z = 3;
	cout << "funslenght=" << funslenght(x, y, z);
	cout << " unitvector=(" << x / sqrt(x * x + y * y + z * z) << ";" << y / sqrt(x * x + y * y + z * z) << ";" << z / sqrt(x * x + y * y + z * z) << ")" << endl;
	int x1;
	int y1;
	int z1;
	cout << "coordinates of 2 vectors";
	cin >> x1;
	cin >> y1;
	cin >> z1;
	cout << "coordinates of 2 vectors=(" << x1 << ";" << y1 << ";" << z1 << ")" << std::endl;
	cout << "scalar product of vectors=" << x * x1 + y * y1 + z * z1 << endl;
	return 0;
}

float funslenght(float x, float y, float z)
{
	return(sqrt(x * x + y * y + z * z));
}