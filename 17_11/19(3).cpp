#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {

	int el;
	vector<int> v{ 1, 5,42, 5, 1 };

	cout << " Size of the vector is " << v.size() << endl;

	for (int i : v) {
		cout << i << " ";
	}
	cout << endl << "How many elements do you want to add? Enter number > ";
	cin >> el;
	for (int i = 0; i < el; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	ofstream fout("vector_info.txt");
	fout << "Size of the vector now is " << v.size() << endl;
	for (int i : v) {
		fout << i << " ";
	}
	fout.close();
	cout << "Now check vecto_info.txt" << endl;
	system("pause");


	return 0;
}