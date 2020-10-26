#include <iostream>
#include <cmath>

using namespace std;

float calculate_lengh(float, float, float);
void unit_vector();
void scalar_product(float, float, float);
void vector_product(float, float, float);
float x = 1, y = 5, z = 3;

int main()
{
    float x_second, y_second, z_second;
    cout << "Lengh = " << calculate_lengh(x, y, z) << endl;
    unit_vector();
    cout << "Enter the coordinates of the second vector" << endl;
    cout << "x = ";
    cin >> x_second;
    cout << "y = ";
    cin >> y_second;
    cout << "z = ";
    cin >> z_second;
    scalar_product(x_second, y_second, z_second);
    vector_product(x_second, y_second, z_second);
}

float calculate_lengh(float x, float y, float z) {

    return (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));
}
void unit_vector() {
    cout << "A(" << x / calculate_lengh(x, y, z) << ", " << y / calculate_lengh(x, y, z) << ", " << z / calculate_lengh(x, y, z) << ")" << endl;
}
void scalar_product(float x_second, float y_second, float z_second) {
    cout << "Scalar product = " << (x * x_second + y * y_second + z * z_second) << endl;
}
void vector_product(float x_second, float y_second, float z_second) {
    cout << "Vector product = (" << (y * z_second - y_second * z) << ", " << (x * z_second - x_second * z) << ", " << (x * y_second - y * x_second) << ")";
}