#include <iostream>
#include <cmath>

using namespace std;
float ed_v(float dl_v, int a);

int main()
{
	float ed_x, ed_y, ed_z;

	int x = 1;
	int y = 5;
	int z = 3;
	float dl_v = sqrt(x * x + y * y + z * z);
	ed_x = ed_v(dl_v, x);
	ed_y = ed_v(dl_v, y);
	ed_z = ed_v(dl_v, z);
	cout << "kordinati 2go vectora" << endl;
	int x1, y1, z1;
	cin >> x1;
	cin >> y1;
	cin >> z1;
	int s_p = x * x1 + y * y1 + z * z1;
	int v_pr_i, v_pr_j, v_pr_k; 
	cout << "Vectornoe_proizvedenie" << s_p << "Edinichniy_Vector:(" << ed_x << ";" << ed_y << ";" << ed_z << ")" << endl;
	v_pr_i = y * z1 - y1 * z;
	v_pr_j = x1 * z - x * z1;
	v_pr_k = x * y1 - x1 * y;
	cout << " Vectornoe_proizvedenie " << "(" << v_pr_i << ";" << v_pr_j << ";"<< v_pr_k << ")" << endl;
}
float ed_v(float dl_v, int a) {
	float b = a / dl_v;
	return b;
}